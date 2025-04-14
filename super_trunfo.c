#include <stdio.h>
#include <string.h>
#include "src/superpoder.h"

// Definição da estrutura CartaSuperTrunfo
int main(){
    char codigoCarta1[4], codigoCarta2[4], nomeCidade1[50], nomeCidade2[50], estado1, estado2;
    char pais1[50], pais2[50];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2, opcao;
    double area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;

    //Entrada de dados para a primeira carta
    printf("======================================================= Carta 1 =======================================================\n");
    
    printf("Digite o pais da primeira carta: ");
    fgets(pais1, 50, stdin);
    pais1[strcspn(pais1, "\n")] = 0;

    printf("Digite a letra do primeiro estado(A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (EX: A01): ");
    scanf("%s", codigoCarta1);
    getchar();

    printf("Digite o nome da cidade da primeira carta: ");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Digite a população da primeira carta: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da primeira carta (km²): ");
    scanf("%lf", &area1);

    printf("Digite o PIB da primeira carta (em bilhôes): ");
    scanf("%lf", &pib1);

    printf("Digite os pontos turisticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    // calculo de atributos da primeira carta
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    superPoder1 =calcularSuperPoder(populacao1, area1, pib1, pontosTuristicos1, pibPerCapita1, densidade1);

    getchar();

    //Entrada de dados para a segunda carta
    printf("======================================================= Carta 2 =======================================================\n");
    
    printf("Digite o pais da segunda carta: ");
    fgets(pais2, 50, stdin);
    pais2[strcspn(pais2, "\n")] = 0;

    printf("Digite a letra do segundo estado(A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (EX: A01): ");
    scanf("%s", codigoCarta2);
    getchar();

    printf("Digite o nome da cidade da segunda carta: ");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a população da segunda carta: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da segunda carta (km²): ");
    scanf("%lf", &area2);

    printf("Digite o PIB da segunda carta (em bilhôes): ");
    scanf("%lf", &pib2);

    printf("Digite os pontos turisticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    // calculo de atributos da segunda carta
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;
    superPoder2 = calcularSuperPoder(populacao2, area2, pib2, pontosTuristicos2, pibPerCapita2, densidade2);

    // Menu de interação de escolha de atributo
    printf("\n========== Escolha de Atributo ==========\n"
        "1 - População\n"
        "2 - Área\n"
        "3 - PIB\n"
        "4 - Pontos Turísticos\n"
        "5 - Densidade demográfica\n"
        "6 - PIB per Capita\n"
        "7 - Super Poder\n"

        "Selecione uma opção: "
    );
    scanf("%d", &opcao);

    //Switch do atributo escolhido
    switch(opcao){
        case 1:
            printf("\n========== População ==========\n");
            printf("%s (%s): %lu habitantes\n", nomeCidade1, pais1, populacao1);
            printf("%s (%s): %lu habitantes\n", nomeCidade2, pais2, populacao2);
            if (populacao1 > populacao2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade1, pais1);
            } else if(populacao1 < populacao2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade2, pais2);
            } else{
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("\n========== Área ==========\n");
            printf("%s (%s): %.2f km²\n", nomeCidade1, pais1, area1);
            printf("%s (%s): %.2f km²\n", nomeCidade2, pais2, area2);
            if (area1 > area2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade1, pais1);
            } else if(area1 < area2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade2, pais2);
            } else{
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("\n========== PIB ==========\n");
            printf("%s (%s): R$%.2f\n", nomeCidade1, pais1, pib1);
            printf("%s (%s): R$%.2f\n", nomeCidade2, pais2, pib2);
            if (pib1 > pib2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade1, pais1);
            } else if(pib1 < pib2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade2, pais2);
            } else{
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("\n========== Pontos Turísticos ==========\n");
            printf("%s (%s): %d pontos turísticos\n", nomeCidade1, pais1, pontosTuristicos1);
            printf("%s (%s): %d pontos turísticos\n", nomeCidade2, pais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade1, pais1);
            } else if(pontosTuristicos1 < pontosTuristicos2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade2, pais2);
            } else{
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("\n========== Densidade demográfica ==========\n");
            printf("%s (%s): %.2f hab/km²\n", nomeCidade1, pais1, densidade1);
            printf("%s (%s): %.2f hab/km²\n", nomeCidade2, pais2, densidade2);
            if (densidade1 < densidade2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade1, pais1);
            } else if(densidade1 > densidade2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade2, pais2);
            } else{
                printf("Empate!\n");
            }
            break;
        case 6:
            printf("\n========= PIB per Capita ==========\n");
            printf("%s (%s): R$%.2f\n", nomeCidade1, pais1, pibPerCapita1);
            printf("%s (%s): R$%.2f\n", nomeCidade2, pais2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade1, pais1);
            } else if (pibPerCapita1 < pibPerCapita2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade2, pais2);
            } else{
                printf("Empate!\n");
            }
            break;
        case 7:
            printf("\n========== Super Poder ==========\n");
            printf("%s (%s): %.2f\n", nomeCidade1, pais1, superPoder1);
            printf("%s (%s): %.2f\n", nomeCidade2, pais2, superPoder2);
            if (superPoder1 > superPoder2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade1, pais1);
            } else if(superPoder1 < superPoder2){
                printf("-> Cidade %s (%s) venceu\n", nomeCidade2, pais2);
            } else{
                printf("Empate!\n");
            }
            break;
        default:
            printf("\nOpção inválida\n");
            break;
    }

    return 0;

}