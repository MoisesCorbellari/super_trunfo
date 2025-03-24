#include <stdio.h>
#include <string.h>

float calcularSuperPoder(unsigned long int populacao, 
    float area, 
    float pib, 
    int pontosTuristicos, 
    float pibPerCapita, 
    float densidade){
        return populacao + area + pib + pontosTuristicos + pibPerCapita + densidade;
    };

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
    printf("\n========= Carta 1 =========");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigoCarta1);
    printf("\nCidade: %s", nomeCidade1);
    printf("\nPopulação: %lu", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB (em bilhões): R$%.2f", pib1);
    printf("\nPontos Turísticos: %d", pontosTuristicos1);
    printf("\nDensidade populacional: %.2f hab/km²", densidade1);
    printf("\nPIB per capita: R$%.2f\n", pibPerCapita1);

    printf("\n========= Carta 2 =========");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigoCarta2);
    printf("\nCidade: %s", nomeCidade2);
    printf("\nPopulação: %lu", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB (em bilhões): R$%.2f", pib2);
    printf("\nPontos Turísticos: %d", pontosTuristicos2);
    printf("\nDensidade populacional: %.2f hab/km²", densidade2);
    printf("\nPIB per capita: R$%.2f\n", pibPerCapita2);

    // Comparando cartas
    printf("\n========= Comparação de cartas =========\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    printf("Densidade: Carta %d venceu (%d - menor densidade populacional)\n\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);

    return 0;

}