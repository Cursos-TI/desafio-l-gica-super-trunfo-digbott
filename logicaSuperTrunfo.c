#include <stdio.h>

int main(){

//Nesse programa o usuário vai cadastrar 2 cartas do Super Trunfo

// Dados da carta 1===


char pais1[20];
float populacao1;
float area1;
float pib1;
float pontosturisticos1;
float densidadepop1;
//float pibperc1;
//float superpoder1;
//float densidadepop1inverso;
//====================

// Dados da carta 2===


char pais2[20];
float populacao2;
float area2;
float pib2;
float pontosturisticos2;
float densidadepop2;
//float pibperc2;
//float superpoder2;
//float densidadepop2inverso;
//====================

    printf("JOGO SUPER TRUNFO! \n \n");

// Entrada de dados da carta1 pelo usuário

    printf("Digite o nome do pais da carta 1:");
        scanf(" %[^\n]", pais1);
    printf("Digite a populacao da carta 1:");
        scanf("%f", &populacao1);
    printf("Digite a area da carta 1:");
        scanf("%f", &area1);
    printf("Digite o pib da carta 1:");
        scanf("%f", &pib1);
    printf("Digite quantos pontos turisticos tem na carta 1:");
        scanf("%f", &pontosturisticos1);
// fim da entrada de dados da carta 1

// Entrada de dados da carta 2 pelo usuário

  
    printf("Digite o nome do pais da carta 2:");
        scanf(" %[^\n]", pais2);
    printf("Digite a populacao da carta 2:");
        scanf("%f", &populacao2);
    printf("Digite a area da carta 2:");
        scanf("%f", &area2);
    printf("Digite o pib da carta 2:");
        scanf("%f", &pib2);
    printf("Digite quantos pontos turisticos tem na carta 2:");
        scanf("%f", &pontosturisticos2);
// fim da entrada de dados da carta 2

// Mostra ao usuário a Carta 1   
    printf("Carta 1 \n\n");
    printf("Pais: %s \n", pais1);
    printf("Populacao: %.0f \n", populacao1);
    printf("Area: %fkm2 \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos turisticos: %.0f \n", pontosturisticos1);
    densidadepop1 = populacao1 / area1;
   // densidadepop1inverso = area1 / (float)populacao1;
    printf("Densidade Populacional: %.2f hab/km2. \n\n", densidadepop1);
  //  pibperc1 = pib1 / (float)populacao1;
  //  printf("PIB Per capita: %.2f. \n", pibperc1);
   // superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibperc1 + densidadepop1inverso;
   // printf("Superpoder: %.2f. \n\n", superpoder1);

// Mostra ao usuário a Carta 2  
    printf("Carta 2 \n\n");
    printf("Pais: %s \n", pais2);
    printf("Populacao: %.0f \n", populacao2);
    printf("Area: %fkm2 \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turisticos: %.0f \n", pontosturisticos2);
    densidadepop2 = populacao2 / area2;
  //  densidadepop2inverso = area2 / (float)populacao2;
    printf("Densidade Populacional: %.2f hab/km2. \n\n", densidadepop2);
 //   pibperc2 = pib2 / (float)populacao2;
  //  printf("PIB Per capita: %.2f. \n", pibperc2);
  //  superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibperc2 + densidadepop2inverso;
  //  printf("Superpoder: %.2f. \n\n", superpoder2);

// MENU
    int opcao1, opcao2;

    printf("==>ESCOLHA 2 ATRIBUTOS DE 1 A 5, QUE VOCE QUER COMPARAR ENTRE AS CARTAS<==\n\n");
    printf("==>MENU DE OPCOES<==\n");
    printf("(1)POPULACAO\n");
    printf("(2)AREA\n");
    printf("(3)PIB\n");
    printf("(4)PONTOS TURISTICOS\n");   
    printf("(5)DENSIDADE POPULACIONAL\n\n");
    
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);

 // menu interativo   
    if(opcao1 != 1) printf("(1)POPULACAO\n");
    if(opcao1 != 2) printf("(2)AREA\n");
    if(opcao1 != 3) printf("(3)PIB\n");
    if(opcao1 != 4) printf("(4)PONTOS TURISTICOS\n");
    if(opcao1 != 5) printf("(5)DENSIDADE PUPULACIONAL\n");

    printf("Escolha o segundo atributo para comparacao: \n");
    scanf("%d", &opcao2);
    

// condicao para que não haja a escolha do mesmo atributo pelo usuario
    if(opcao1 == opcao2){
        printf("Atributo ja escolhido. \n Escolha um outro atributo: ");
        scanf("%d", &opcao2);
        if(opcao1 == opcao2){
           printf("Atributo ja escolhido. \n Escolha um outro atributo: \n");
           scanf("%d", &opcao2); 
        }
    }else {
        printf("Voce escolheu os atributos %d e %d. \n", opcao1, opcao2);
    }

    // comparacao entre carta 1 e carta 2 sobre o primeiro atributo escolhido

    switch (opcao1)
    {
    case 1:
        if (populacao1 > populacao2){
            printf("Carta 1: %s - Populacao: %.0f\n", pais1, populacao1);
            printf("Carta 2: %s - Populacao: %.0f.\n", pais2, populacao2);
            printf("Carta 1 venceu nesse atributo! \n");
        }else if (populacao1 < populacao2){
            printf("Carta 1: %s - Populacao: %.0f.\n", pais1, populacao1);
            printf("Carta 2: %s - Populacao: %.0f.\n", pais2, populacao2);
            printf("Carta 2 venceu nesse atributo! \n");
        }else {
            printf("Carta 1: %s - Populacao: %.0f.\n", pais1, populacao1);
            printf("Carta 2: %s - Populacao: %.0f.\n", pais2, populacao2);
            printf("EMPATE nesse atributo \n");
        }
        break;
    case 2:
        if (area1 > area2){
            printf("Carta 1: %s - area: %f.\n", pais1, area1);
            printf("Carta 2: %s - area: %f.\n", pais2, area2);
            printf("Carta 1 venceu nesse atributo! \n");
        }else if (area1 < area2){
            printf("Carta 1: %s - area: %f.\n", pais1, area1);
            printf("Carta 2: %s - area: %f.\n", pais2, area2);
            printf("Carta 2 venceu nesse aatributo! \n");
        }else {
            printf("Carta 1: %s - area: %f.\n", pais1, area1);
            printf("Carta 2: %s - area: %f.\n", pais2, area2);
            printf("EMPATE nesse atributo\n");
        }
        break;
    case 3:
        if (pib1 > pib2){
            printf("Carta 1: %s - PIB: %f.\n", pais1, pib1);
            printf("Carta 2: %s - PIB: %f.\n", pais2, pib2);
            printf("Carta 1 venceu nesse atributo! \n");
        }else if (pib1 < pib2){
            printf("Carta 1: %s - PIB: %f.\n", pais1, pib1);
            printf("Carta 2: %s - PIB: %f.\n", pais2, pib2);
            printf("Carta 2 venceu nesse atributo! \n");
        }else {
            printf("Carta 1: %s - PIB: %f.\n", pais1, pib1);
            printf("Carta 2: %s - PIB: %f.\n", pais2, pib2);
            printf("EMPATE nesse atributo\n");
        }
        break;
    case 4: 
        if (pontosturisticos1 > pontosturisticos2){
            printf("Carta 1: %s - Pontos Turisticos: %.0f.\n", pais1, pontosturisticos1);
            printf("Carta 2: %s - Pontos Turisricos: %.0f.\n", pais2, pontosturisticos2);
            printf("Carta 1 venceu nesse atributo! \n");
        }else if (pontosturisticos1 < pontosturisticos2){
            printf("Carta 1: %s - Pontos Turisticos: %.0f.\n", pais1, pontosturisticos1);
            printf("Carta 2: %s - Pontos Turisticos: %.0f.\n", pais2, pontosturisticos2);
            printf("Carta 2 venceu nesse atributo! \n");
        }else {
            printf("Carta 1: %s - Pontos Turisticos: %.0f.\n", pais1, pontosturisticos1);
            printf("Carta 2: %s - Pontos Turisticos: %.0f.\n", pais2, pontosturisticos2);
            printf("EMPATE nesse atributo \n");
        }
        break;
    case 5:
        if (densidadepop1 < densidadepop2){
            printf("Carta 1: %s - Densidade Populacional: %f.\n", pais1, densidadepop1);
            printf("Carta 2: %s - Densidade Populacional: %f.\n", pais2, densidadepop2);
            printf("Carta 1 venceu nesse atributo! \n");
        }else if (densidadepop1 > densidadepop2){
            printf("Carta 1: %s - Densidade Populacional: %f.\n", pais1, densidadepop1);
            printf("Carta 2: %s - Densidade Populacional: %f.\n", pais2, densidadepop2);
            printf("Carta 2 venceu nesse atributo! \n");
        }else {
            printf("Carta 1: %s - Densidade Populacional: %f.\n", pais1, densidadepop1);
            printf("Carta 2: %s - Densidade Populacional: %f.\n", pais2, densidadepop2);
            printf("EMPATE nesse atributo \n");
        }
        break;
    default:
        printf("OPCAO INVALIDA! \n");
        break;
    }
// comparacao entre carta 1 e carta 2 sobre o segundo atributo escolhido
    switch (opcao2)
    {
    case 1:
        if (populacao1 > populacao2){
            printf("Carta 1: %s - Populacao: %.0f.\n", pais1, populacao1);
            printf("Carta 2: %s - Populacao: %.0f.\n", pais2, populacao2);
            printf("Carta 1 venceu nesse atributo! \n");
        }else if (populacao1 < populacao2){
            printf("Carta 1: %s - Populacao: %.0f.\n", pais1, populacao1);
            printf("Carta 2: %s - Populacao: %.0f.\n", pais2, populacao2);
            printf("Carta 2 venceu nesse atributo! \n");
        }else {
            printf("Carta 1: %s - Populacao: %.0f.\n", pais1, populacao1);
            printf("Carta 2: %s - Populacao: %.0f.\n", pais2, populacao2);
            printf("EMPATE nesse atributo \n");
        }
        break;
    case 2:
        if (area1 > area2){
            printf("Carta 1: %s - area: %f.\n", pais1, area1);
            printf("Carta 2: %s - area: %f.\n", pais2, area2);
            printf("Carta 1 venceu nesse atributo! \n");
        }else if (area1 < area2){
            printf("Carta 1: %s - area: %f.\n", pais1, area1);
            printf("Carta 2: %s - area: %f.\n", pais2, area2);
            printf("Carta 2 venceu nesse atributo! \n");
        }else {
            printf("Carta 1: %s - area: %f.\n", pais1, area1);
            printf("Carta 2: %s - area: %f.\n", pais2, area2);
            printf("EMPATE nesse atributo \n");
        }
        break;
    case 3:
        if (pib1 > pib2){
            printf("Carta 1: %s - PIB: %f.\n", pais1, pib1);
            printf("Carta 2: %s - PIB: %f.\n", pais2, pib2);
            printf("Carta 1 venceu nesse atributo! \n");
        }else if (pib1 < pib2){
            printf("Carta 1: %s - PIB: %f.\n", pais1, pib1);
            printf("Carta 2: %s - PIB: %f.\n", pais2, pib2);
            printf("Carta 2 venceu nesse atributo! \n");
        }else {
            printf("Carta 1: %s - PIB: %f.\n", pais1, pib1);
            printf("Carta 2: %s - PIB: %f.\n", pais2, pib2);
            printf("EMPATE nesse atributo \n");
        }
        break;
    case 4: 
        if (pontosturisticos1 > pontosturisticos2){
            printf("Carta 1: %s - Pontos Turisticos: %.0f.\n", pais1, pontosturisticos1);
            printf("Carta 2: %s - Pontos Turisricos: %.0f.\n", pais2, pontosturisticos2);
            printf("Carta 1 venceu nesse atributo! \n");
        }else if (pontosturisticos1 < pontosturisticos2){
            printf("Carta 1: %s - Pontos Turisticos: %.0f.\n", pais1, pontosturisticos1);
            printf("Carta 2: %s - Pontos Turisticos: %.0f.\n", pais2, pontosturisticos2);
            printf("Carta 2 venceu nesse atributo! \n");
        }else {
            printf("Carta 1: %s - Pontos Turisticos: %.0f.\n", pais1, pontosturisticos1);
            printf("Carta 2: %s - Pontos Turisticos: %.0f.\n", pais2, pontosturisticos2);
            printf("EMPATE nesse atributo\n");
        }
        break;
    case 5:
        if (densidadepop1 < densidadepop2){
            printf("Carta 1: %s - Densidade Populacional: %f.\n", pais1, densidadepop1);
            printf("Carta 2: %s - Densidade Populacional: %f.\n", pais2, densidadepop2);
            printf("Carta 1 venceu nesse atributo! \n");
        }else if (densidadepop1 > densidadepop2){
            printf("Carta 1: %s - Densidade Populacional: %f.\n", pais1, densidadepop1);
            printf("Carta 2: %s - Densidade Populacional: %f.\n", pais2, densidadepop2);
            printf("Carta 2 venceu nesse atributo! \n");
        }else {
            printf("Carta 1: %s - Densidade Populacional: %f.\n", pais1, densidadepop1);
            printf("Carta 2: %s - Densidade Populacional: %f.\n", pais2, densidadepop2);
            printf("EMPATE nesse atributo \n");
        }
        break;
    default:
        printf("OPCAO INVALIDA! \n");
        break;
    }

    float soma1 = 0.0, soma2 = 0.0;
// soma do primeiro atributo
    switch (opcao1)
    {
    case 1:
        soma1 += populacao1;
        soma2 += populacao2;
        break;
    case 2:
        soma1 += area1;
        soma2 += area2;
        break;
    case 3:
        soma1 += pib1;
        soma2 += pib2;
        break;
    case 4:
        soma1 += pontosturisticos1;
        soma2 += pontosturisticos2;
        break;
    case 5:
        soma1 += densidadepop1;
        soma2 += densidadepop2;
        break;
    }
// soma do segundo atributo
    switch (opcao2)
    {
    case 1:
        soma1 += populacao1;
        soma2 += populacao2;
        break;
    case 2:
        soma1 += area1;
        soma2 += area2;
        break;
    case 3:
        soma1 += pib1;
        soma2 += pib2;
        break;
    case 4:
        soma1 += pontosturisticos1;
        soma2 += pontosturisticos2;
        break;
    case 5:
        soma1 += densidadepop1;
        soma2 += densidadepop2;
        break;
    }


    printf("A soma dos atributos escolhidos da Carta 1: %f \n", soma1);
    printf("A soma dos atributos escolhidos da Carta 2: %f \n", soma2);

    if(soma1 > soma2){
        printf("A carta 1 venceu! \n");
    }else if (soma2 > soma1){
        printf("A carta 2 venceu! \n");
    }else {
        printf("EMPATE entre a CARTA 1 E CARTA 2. \n");
    }
}
   
   


}
