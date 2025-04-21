#include <stdio.h>
#include <string.h>
#include "src/superpoder.h"

// Menu de interação de escolha de atributo
void menuAtributos(int skip){
    printf("\n========== Escolha de Atributo ==========\n");
    if (skip != 1) printf("1 - População\n");
    if (skip != 2) printf("2 - Área\n");
    if (skip != 3) printf("3 - PIB\n");
    if (skip != 4) printf("4 - Pontos Turísticos\n");
    if (skip != 5) printf("5 - Densidade demográfica\n");
    if (skip != 6) printf("6 - PIB per Capita\n");
    if (skip != 7) printf("7 - Super Poder\n");

    printf("Selecione uma opção: ");
}

double valorAtributo(int opcao, unsigned long int pop, double area, double pib, int pt, double densidade, double ppc, double sp){
    switch(opcao){
        case 1: return pop;
        case 2: return area;
        case 3: return pib;
        case 4: return pt;
        case 5: return densidade;
        case 6: return ppc;
        case 7: return sp;
        default: return 0;
    }
}

const char* nomeAtributo(int opcao){
    switch(opcao){
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade demográfica";
        case 6: return "PIB per Capita";
        case 7: return "Super Poder";
        default: return "";
    }
} 

// Definição da estrutura CartaSuperTrunfo
int main(){
    char codigoCarta1[4], codigoCarta2[4], nomeCidade1[50], nomeCidade2[50], estado1, estado2;
    char pais1[50], pais2[50];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2, opcao1 = 0, opcao2 = 0;
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
    
    // calculo de atributos da primeira carta
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    superPoder1 =calcularSuperPoder(populacao1, area1, pib1, pontosTuristicos1, pibPerCapita1, densidade1);

    // calculo de atributos da segunda carta
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;
    superPoder2 = calcularSuperPoder(populacao2, area2, pib2, pontosTuristicos2, pibPerCapita2, densidade2);
    
    //Menu de escolha de dois atributos
    menuAtributos(0);
    scanf("%d", &opcao1);

    do{
        menuAtributos(opcao1);
        scanf("%d", &opcao2);
        if (opcao1 == opcao2){
            printf("Opção de atributo já escolhida, escolha outro!\n");
        }
    } while (opcao1 == opcao2);

    // valores dos atributospara cada carta
    double valor1_c1 = valorAtributo(opcao1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1, superPoder1);
    double valor2_c1 = valorAtributo(opcao2, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1, superPoder1);
    double valor1_c2 = valorAtributo(opcao1, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2, superPoder2);
    double valor2_c2 = valorAtributo(opcao2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2, superPoder2);

    // comparação individual das cartas
    printf("\n========== Comparação ==========\n");
    printf("Atributos escolhidos: %s & %s\n", nomeAtributo(opcao1), nomeAtributo(opcao2));
    printf("%s (%s): %.2f (%s) | %.2f (%s)\n", 
        nomeCidade1, pais1, 
        valor1_c1, nomeAtributo(opcao1),
        valor2_c1, nomeAtributo(opcao2));

    printf("%s (%s): %.2f (%s) | %.2f(%s) \n", 
        nomeCidade2, pais2, 
        valor1_c2, nomeAtributo(opcao1), 
        valor2_c2, nomeAtributo(opcao2));

    printf("\n---------- Resultado Individual ----------\n");
    for (int i = 0; i<2 ; i++){
        int opcao = (i == 0) ? opcao1 : opcao2;
        double v1 = (i == 0) ? valor1_c1 : valor1_c2;
        double v2 = (i == 0) ? valor1_c2 : valor2_c2;

        printf("%s: ", nomeAtributo(opcao));
        if (opcao == 5){
            if(v1 < v2)
                printf("-> %s venceu\n", nomeCidade1);
            else if (v1 > v2)
                printf("-> %s venceu\n", nomeCidade2);
            else
                printf("-> Empate!\n");
        } else{
            if(v1 > v2)
                printf("-> %s venceu\n", nomeCidade1);
            else if(v1 < v2)
                printf("-> %s venceu\n", nomeCidade2);
            else
                printf("-> Empate!\n");
        }
    }

    // soma total
    printf("\n---------- Resultado Geral ----------\n");
    double soma1 = valor1_c1 + valor1_c2;
    double soma2 = valor2_c1 + valor2_c2;
    
    if(soma1 > soma2){
        printf("-> Vencedor: %s (%s)\n", nomeCidade1, pais1);
    } else if(soma1 < soma2){
        printf("-> Vencedor: %s (%s)\n", nomeCidade2, pais2);
    } else{
        printf("-> Empate!\n");
    }

    return 0;

}