#include <stdio.h>
#include <stdlib.h>
int main() {

    // Declaração das variáveis das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nome1[100], nome2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Menu de interação do jogo

    printf("§§§§ SUPER TRUNGO §§§§ \n");
    printf("Escolha uma opção: \n");
    printf("1. JOGAR 🎮 \n");
    printf("2. REGRAS 📜\n");
    printf("3. FINALIZAR 🚫 \n");
    printf("Escolha: ");

    // Entrada dos dados da primeira carta
    printf("Digite o estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome1);

    printf("Digite a população: ");
    scanf("%u", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Declaração das variáveis auxiliares primeira carta
    float Densidade_Populacional1 = populacao1 / area1;
    float pib_Per_Capita1 = populacao1 / pib1;
    float inverso_Densidade1 = 1 / Densidade_Populacional1;
    float superPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_Per_Capita1 + inverso_Densidade1;

    // Exibição dos dados da primeira carta
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1);
    printf("PIB Per Capita: %.2f reais\n", pib_Per_Capita1);
    printf("Super Poder: %.2f\n", superPoder1);


    // Entrada dos dados da segunda carta
    printf("\nDigite o estado (A-H) da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome2);

    printf("Digite a população: ");
    scanf("%u", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Declaração das variáveis auxiliares segunda carta
    float Densidade_Populacional2 = populacao2 / area2;
    float pib_Per_Capita2 = populacao2 / pib2;
    float inverso_Densidade2 = 1 / Densidade_Populacional2;
    float superPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_Per_Capita2 + inverso_Densidade2;

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
    printf("PIB Per Capita: %.2f reais\n", pib_Per_Capita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos Atributos
    printf("\nComparação de Cartas:\n");

    // Comparação População
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);

    // Comparação Área
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    // Comparação PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Comparação Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);

    // Comparação Densidade Populacional
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade_Populacional1 < Densidade_Populacional2);

    // Comparação PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_Per_Capita1 > pib_Per_Capita2);

    // Comparação Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    if (populacao1 > populacao2){
    printf("A carta 1 venceu \n");
    
    } else {

        printf("A carta 2 venceu \n");
    }

    return 0;
}
