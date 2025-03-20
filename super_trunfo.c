#include <stdio.h>
#include <string.h>

// Definição da estrutura CartaSuperTrunfo
int main(){
    char estado1, estado2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;    

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
    scanf("%d", &populacao1);

    printf("Digite a área da primeira carta (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta (em bilhôes): ");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1e9) / populacao1;

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
    scanf("%d", &populacao2);

    printf("Digite a área da segunda carta (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta (em bilhôes): ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1e9) / populacao2;

    //Exibição dos dados das cartas
    printf("\n========= Carta 1 =========");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigoCarta1);
    printf("\nCidade: %s", nomeCidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB (em bilhões): R$%.2f", pib1);
    printf("\nPontos Turísticos: %d", pontosTuristicos1);
    printf("\nDensidade populacional: %.2f hab/km²", densidade1);
    printf("\nPIB per capita: R$%.2f reais\n", pibPerCapita1);

    printf("\n========= Carta 2 =========");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigoCarta2);
    printf("\nCidade: %s", nomeCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB (em bilhões): %.2f", pib2);
    printf("\nPontos Turísticos: %d", pontosTuristicos2);
    printf("\nDensidade populacional: %.2f hab/km²", densidade2);
    printf("\nPIB per capita: R$%.2f\n", pibPerCapita2);

    return 0;

}