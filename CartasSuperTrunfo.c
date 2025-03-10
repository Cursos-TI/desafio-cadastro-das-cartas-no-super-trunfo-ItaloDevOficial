#include <stdio.h>
#include <stdlib.h>

// Função para imprimir uma linha de borda
void imprimir_borda()
{
    printf("*******************************\n");
}
int main()
{

    // Declaração das variáveis das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nome1[100], nome2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Menu de interação do jogo

    imprimir_borda();
    printf("SUPER TRUNGO \n");
    imprimir_borda();

    printf("Escolha uma opção: \n");
    printf("1. JOGAR 🎮 \n");
    printf("2. REGRAS 📜\n");
    printf("3. FINALIZAR 🚫 \n");
    imprimir_borda();

    int escolhaMenu;
    printf("Escolha: ");
    scanf("%d", &escolhaMenu);
    imprimir_borda();

    // Processando a escolha do usuário

    switch (escolhaMenu)
    {
    case 1:
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
        imprimir_borda();

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
        imprimir_borda();

        // Comparação dos Atributos

        printf("Escolha um atributo para fazer a comparação \n");
        printf("1. POPULAÇÃO \n");
        printf("2. ÁREA \n");
        printf("3. PIB  \n");
        printf("4. PONTOS TURISTICOS \n");
        printf("5. DENSIDADE POPULACIONAL \n");
        imprimir_borda();

        int escolhaAtributo;

        printf("Escolha: ");
        scanf("%d", &escolhaAtributo);
        imprimir_borda();

        switch (escolhaAtributo)
        {
        case 1:
            if (populacao1 > populacao2)
            {
                printf("\n Carta 1 venceu! \n");
            }
            else if (populacao1 == populacao2)
            {
                printf("\n Empate! \n");
            }
            else
            {
                printf("\n Carta 2 venceu! \n");
            }

            break;

        case 2:
            if (area1 > area2)
            {
                printf("\n Carta 1 venceu! \n");
            }
            else if (area1 == area2)
            {
                printf("\n Empate! \n");
            }
            else
            {
                printf("\n Carta 2 venceu! \n\n");
            }

            printf("Cidades: %s vs %s \n", nome1, nome2);
            printf("Atributo comparado: Área");
            printf("Valores dos atributos: %.2f e %.2f\n", area1, area2);
            break;

        case 3:
            if (pib1 > pib2)
            {
                printf("\n Carta 1 venceu! \n");
            }
            else if (pib1 == pib2)
            {
                printf("\n Empate! \n");
            }
            else
            {
                printf("\n Carta 2 venceu! \n");
            }
            break;

        case 4:
            if (pontos_turisticos1 > pontos_turisticos2)
            {
                printf("\n Carta 1 venceu! \n");
            }
            else if (pontos_turisticos1 == pontos_turisticos2)
            {
                printf("\n Empate! \n");
            }
            else
            {
                printf("\n Carta 2 venceu! \n");
            }
            break;

        case 5:
            if (Densidade_Populacional1 > Densidade_Populacional2)
            {
                printf("\n Carta 1 venceu! \n");
            }
            else if (Densidade_Populacional1 == Densidade_Populacional2)
            {
                printf("\n Empate! \n");
            }
            else
            {
                printf("\n Carta 2 venceu! \n");
            }
            break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
        }

        break;
    case 2:
        // Mostrar as regras
        printf("\nRegras do Super Trunfo:\n");
        printf("- O jogo consiste em escolher duas cartas.\n");
        printf("- Cada carta possui diversos dados, como estado, código, cidade, população, área, PIB, pontos turísticos e PIB per capita.\n");
        printf("- O objetivo é calcular um número chamado 'SuperPoder' para cada carta, que é a soma de todos os dados da carta.\n");
        printf("- A carta com o maior 'SuperPoder' é a escolhida para o jogador.\n");
        break;
    case 3:
        // Finalizar o jogo
        printf("Finalizando o jogo...\n");
        break;

    default:
        printf("\nOpção inválida! Tente novamente.\n");
        break;
    }

    return 0;
}
