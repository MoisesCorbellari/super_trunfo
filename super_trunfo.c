#include <stdio.h>
#include <string.h>
#include "src/superpoder.h"

// Definição da estrutura CartaSuperTrunfo
int main(){
    char codigoCarta1[4], codigoCarta2[4], nomeCidade1[50], nomeCidade2[50], estado1, estado2;
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    //Entrada de dados para a primeira carta
    printf("Digite a letra do primeiro estado(A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (EX: A01): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade da primeira carta: ");
    getchar();  // Remove o \n pendente
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Digite a população da primeira carta: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da primeira carta (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta (em bilhôes): ");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    // calculo de atributos da primeira carta
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    superPoder1 =calcularSuperPoder(populacao1, area1, pib1, pontosTuristicos1, pibPerCapita1, densidade1);

    getchar();

    //Entrada de dados para a segunda carta
    printf("\nDigite a letra do segundo estado(A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (EX: A01): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade da segunda carta: ");
    getchar();  // Remove o \n pendente
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a população da segunda carta: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da segunda carta (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta (em bilhôes): ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    // calculo de atributos da segunda carta
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;
    superPoder2 = calcularSuperPoder(populacao2, area2, pib2, pontosTuristicos2, pibPerCapita2, densidade2);

    //Exibição dos dados
    printf("\n========= Carta 1 =========\n");
    printf(
        "Estado: %c\n"
        "Código: %s\n"
        "Cidade: %s\n"
        "População: %lu\n"
        "Área: %.2f km²\n"
        "PIB (em bilhões): R$%.2f\n"
        "Pontos Turísticos: %d\n"
        "Densidade populacional: %.2f hab/km²\n"
        "PIB per capita: R$%.2f\n",
        estado1, codigoCarta1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1  
    );

    printf("\n========= Carta 2 =========\n");
    printf(
        "Estado: %c\n"
        "Código: %s\n"
        "Cidade: %s\n"
        "População: %lu\n"
        "Área: %.2f km²\n"
        "PIB (em bilhões): R$%.2f\n"
        "Pontos Turísticos: %d\n"
        "Densidade populacional: %.2f hab/km²\n"
        "PIB per capita: R$%.2f\n",
        estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2
    );

    // Comparando cartas
    printf("\n========= Comparação de cartas =========\n");
    if (populacao1 > populacao2){
        printf("População: carta 1 venceu!\n");
    } else{
        printf("População: carta 2 venceu!\n");
    }

    if (area1 > area2){
        printf("Área: carta 1 venceu!\n");
    } else{
        printf("Área: carta 2 venceu!\n");
    }

    if (pib1 > pib2){
        printf("PIB: carta 1 venceu!\n");
    } else{
        printf("PIB: carta 2 venceu!\n");
    }

    if (pontosTuristicos1 > pontosTuristicos2){
        printf("Pontos Turísticos: carta 1 venceu!\n");
    } else{
        printf("Pontos Turísticos: carta 2 venceu!\n");
    }

    if (pibPerCapita1 > pibPerCapita2){
        printf("PIB per Capita: carta 1 venceu!\n");
    } else{
        printf("PIB per Capita: carta 2 venceu!\n");
    }

    if (densidade1 < densidade2){
        printf("Densidade: carta 1 venceu!\n");
    } else{
        printf("Densidade: carta 2 venceu!\n");
    }

    return 0;

}