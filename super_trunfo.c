#include <stdio.h>
#include <string.h>

// Definição da estrutura CartaSuperTrunfo
int main(){
    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

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

    printf("Digite a área da primeira carta: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

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

    printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    //Exibição dos dados das cartas
    printf("\n========= Carta 1 =========\n");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigoCarta1);
    printf("\nCidade: %s", nomeCidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nPontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n========= Carta 2 =========\n");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigoCarta2);
    printf("\nCidade: %s", nomeCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nPontos Turísticos: %d\n", pontosTuristicos2);

    return 0;

}