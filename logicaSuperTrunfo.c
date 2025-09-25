#include <stdio.h>


int main() {

//===============================
//Dados da carta 1
//
char estado1[] = "SP";
char codigo1[] = "COD1";
char cidade1[] = "Sao Paulo";
int populacao1 = 12000000;
float area1 = 1521.11;
int pib1 = 714000000;
int pontosturisticos1 = 76;
float densidadep1;
float pibpc1;
//===============================

//===============================
//Dados da carta 2
//
char estado2[] = "AM";
char codigo2[] = "COD2";
char cidade2[] = "Manaus";
int populacao2 = 2000000;
float area2 = 11401.00;
int pib2 = 103000000;
int pontosturisticos2 = 10;
float densidadep2;
float pibpc2;
//===============================

    printf("Jogo Super Trunfo \n");
    printf("A carta de maior valor ganha! \n");

    
    // MOSTRANDO CARTA 1 AO USUARIO =================
    printf("CARTA 1 \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %f \n", area1);
    printf("PIB: %d \n", pib1);                                                     
    printf("Quantidade de pontos turisticos: %d \n", pontosturisticos1);    
    
    densidadep1 = populacao1 / area1;
    printf("Densidade populacional da Carta 1: %f \n", densidadep1);
    pibpc1 = pib1 / populacao1;
    printf("PIB per capita da CARTA 1: %f \n", pibpc1);

    //==================================================
    
    // MOSTRANDO CARTA 2 AO USUARIO =================
    printf("CARTA 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %f \n", area2);
    printf("PIB: %d \n", pib2);                                                     
    printf("Quantidade de pontos turisticos: %d \n", pontosturisticos2);    
    
    densidadep2 = populacao2 / area2;
    printf("Densidade populacional da Carta 2: %f \n", densidadep2);
    pibpc2 = pib2 / populacao2;
    printf("PIB per capita da CARTA 2: %f \n", pibpc2);

    //==================================================

    
    // DEFINIÇÃO DA CARTA VENCEDORA=====================
    printf("Comparacao de cartas. \n");
    printf("Atributo de comparacao: PIB \n");

    printf("Carta 1 - Sao Paulo (SP): %d \n", pib1);
    printf("Carta 2 - Manaus (AM): %d \n", pib2);

    if(pib1 > pib2){
        printf("Carta 1 e a vencedora! \n");
    }else {
        printf("Carta 2 e a vencedora! \n");
    }

    //===================================================
}
