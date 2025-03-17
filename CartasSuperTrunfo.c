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
    printf("SUPER TRUNFO \n");
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

        // Exibição dos dados da primeira carta
        printf("\n-------------------------- Carta 1 --------------------------");
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
        printf("---------------------------------------------------------------\n");

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

        // Exibição dos dados da segunda carta
        printf("\n-------------------------- Carta 2 --------------------------");
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
        printf("---------------------------------------------------------------\n");

        // Comparação dos Atributos
        int atributo1, atributo2;
        char atributo_comparado1[50], atributo_comparado2[50];
        int resultado1, resultado2;

        // Escolha do primeiro atributo
        printf("Escolha o primeiro atributo para fazer a comparação \n");
        printf("1. POPULAÇÃO \n");
        printf("2. ÁREA \n");
        printf("3. PIB  \n");
        printf("4. PONTOS TURISTICOS \n");
        printf("5. DENSIDADE POPULACIONAL \n");
        imprimir_borda();

        printf("Escolha: ");
        scanf("%d", &atributo1);
        imprimir_borda();

        // Escolha do segundo atributo
        printf("Escolha o segundo atributo para fazer a comparação \n");
        printf("1. POPULAÇÃO \n");
        printf("2. ÁREA \n");
        printf("3. PIB  \n");
        printf("4. PONTOS TURISTICOS \n");
        printf("5. DENSIDADE POPULACIONAL \n");
        imprimir_borda();

        printf("Escolha: ");
        scanf("%d", &atributo2);
        imprimir_borda();

        // Exibição clara da comparação e dos resultados

        printf("\nComparando as Cartas:\n");
        printf("\nCidades: %s vs %s\n", nome1, nome2);
        printf("\nAtributos Comparados: \n");

        // Comparação do primeiro atributo
        switch (atributo1)
        {
        case 1:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "População");
            printf("%s: Carta 1: %u | Carta 2: %u\n", atributo_comparado1, populacao1, populacao2);

            resultado1 = populacao1 > populacao2 ? populacao1 : populacao2;

            if (populacao1)
            {
                printf("Carta 1 venceu nesse atributo \n");
            }
            else if (populacao2)
            {
                printf("Carta 2 venceu nesse atributo \n");
            }
            else
            {
                printf("Ambas as cidades possuem o mesmo valor do atributo!");
            }

            break;
        case 2:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "Área");
            printf("%s: Carta 1: %.2f | Carta 2: %.2f\n", atributo_comparado1, area1, area2);

            resultado1 = area1 > area2 ? area1 : area2;

            if (area1)
            {
                printf("Carta 1 venceu nesse atributo \n");
            }
            else if (area2)
            {
                printf("Carta 2 venceu nesse atributo \n");
            }
            else
            {
                printf("Ambas as cidades possuem o mesmo valor do atributo!");
            }
            break;
        case 3:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "PIB");
            printf("%s: Carta 1: %.2f | Carta 2: %.2f\n", atributo_comparado1, pib1, pib2);

            resultado1 = pib1 > pib2 ? pib1 : pib2;

            if (pib1)
            {
                printf("Carta 1 venceu nesse atributo \n");
            }
            else if (pib2)
            {
                printf("Carta 2 venceu nesse atributo \n");
            }
            else
            {
                printf("Ambas as cidades possuem o mesmo valor do atributo!");
            }
            break;
        case 4:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "Pontos Turísticos");
            printf("%s: Carta 1: %d | Carta 2: %d\n", atributo_comparado1, pontos_turisticos1, pontos_turisticos2);

            resultado1 = pontos_turisticos1 > pontos_turisticos2 ? pontos_turisticos1 : pontos_turisticos2;

            if (pontos_turisticos1)
            {
                printf("Carta 1 venceu nesse atributo \n");
            }
            else if (pontos_turisticos2)
            {
                printf("Carta 2 venceu nesse atributo \n");
            }
            else
            {
                printf("Ambas as cidades possuem o mesmo valor do atributo!");
            }
            break;
        case 5:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "Densidade Populacional");
            printf("%s: Carta 1: %.2f | Carta 2: %.2f\n", atributo_comparado1, Densidade_Populacional1, Densidade_Populacional2);

            resultado1 = Densidade_Populacional1 < Densidade_Populacional2 ? Densidade_Populacional1 : Densidade_Populacional2;

            if (Densidade_Populacional1)
            {
                printf("Carta 1 venceu nesse atributo \n");
            }
            else if (Densidade_Populacional2)
            {
                printf("Carta 2 venceu nesse atributo \n");
            }
            else
            {
                printf("Ambas as cidades possuem o mesmo valor do atributo!");
            }
            break;

        default:
            printf("\nOpção inválida!\n");
        }

        // Comparação do segundo atributo
        switch (atributo2)
        {
        case 1:
            snprintf(atributo_comparado2, sizeof(atributo_comparado2), "População");
            printf("%s: Carta 1: %u | Carta 2: %u\n", atributo_comparado2, populacao1, populacao2);

            resultado2 = populacao1 > populacao2 ? populacao1 : populacao2;

            if (populacao1)
            {
                printf("Carta 1 venceu nesse atributo \n");
            }
            else if (populacao2)
            {
                printf("Carta 2 venceu nesse atributo \n");
            }
            else
            {
                printf("Ambas as cidades possuem o mesmo valor do atributo!");
            }
            break;
        case 2:
            snprintf(atributo_comparado2, sizeof(atributo_comparado2), "Área");
            printf("%s: Carta 1: %.2f | Carta 2: %.2f\n", atributo_comparado2, area1, area2);

            resultado2 = area1 > area2 ? area1 : area2;

            if (area1)
            {
                printf("Carta 1 venceu nesse atributo \n");
            }
            else if (area2)
            {
                printf("Carta 2 venceu nesse atributo \n");
            }
            else
            {
                printf("Ambas as cidades possuem o mesmo valor do atributo!");
            }
            break;
        case 3:
            snprintf(atributo_comparado2, sizeof(atributo_comparado2), "PIB");
            printf("%s: Carta 1: %.2f | Carta 2: %.2f\n", atributo_comparado2, pib1, pib2);

            resultado2 = pib1 > pib2 ? pib1 : pib2;

            if (pib1)
            {
                printf("Carta 1 venceu nesse atributo \n");
            }
            else if (pib2)
            {
                printf("Carta 2 venceu nesse atributo \n");
            }
            else
            {
                printf("Ambas as cidades possuem o mesmo valor do atributo!");
            }
            break;
        case 4:
            snprintf(atributo_comparado2, sizeof(atributo_comparado2), "Pontos Turísticos");
            printf("%s: Carta 1: %d | Carta 2: %d\n", atributo_comparado2, pontos_turisticos1, pontos_turisticos2);

            resultado2 = pontos_turisticos1 > pontos_turisticos2 ? pontos_turisticos1 : pontos_turisticos2;

            if (pontos_turisticos1)
            {
                printf("Carta 1 venceu nesse atributo \n");
            }
            else if (pontos_turisticos2)
            {
                printf("Carta 2 venceu nesse atributo \n");
            }
            else
            {
                printf("Ambas as cidades possuem o mesmo valor do atributo!");
            }
            break;
        case 5:
            snprintf(atributo_comparado2, sizeof(atributo_comparado2), "Densidade Populacional");
            printf("%s: Carta 1: %.2f | Carta 2: %.2f\n", atributo_comparado2, Densidade_Populacional1, Densidade_Populacional2);

            resultado2 = Densidade_Populacional1 < Densidade_Populacional2 ? Densidade_Populacional1 : Densidade_Populacional2;

            if (Densidade_Populacional1)
            {
                printf("Carta 1 venceu nesse atributo \n");
            }
            else if (Densidade_Populacional2)
            {
                printf("Carta 2 venceu nesse atributo \n");
            }
            else
            {
                printf("Ambas as cidades possuem o mesmo valor do atributo!");
            }
            break;
        default:
            printf("\nOpção inválida!\n");
        }

        // Soma dos atributos

        int soma1 = resultado1 + resultado2;
        int soma2 = resultado1 + resultado2;

        imprimir_borda();
        printf("\nSoma dos Atributos:\n");
        printf("Carta 1: %.2f\n", soma1);
        printf("Carta 2: %.2f\n", soma2);

        // Comparando os atributos
        if (soma1 > soma2)
        {
            printf("\n🎉Carta 1 venceu!🎉\n");
        }
        else if (soma2 > soma1)
        {
            printf("\n🎉Carta 2 venceu!🎉\n");
        }
        else
        {
            printf("\n🤝Empate!🤝 \n");
        }

        break;

    case 2:
        // Mostrar as regras
        printf("\nRegras do Super Trunfo:\n");
        printf("1 - Menu inicial: O usuário escolhe a opção JOGAR 🎮\n");
        printf("2 - Entrada de dados: O programa pede os dados das duas cartas, como o estado, código, nome da cidade, população, área, PIB, e pontos turísticos.\n");
        printf("3 - Exibição das cartas: Após os dados de ambas as cartas serem inseridos, o programa exibe as informações detalhadas de cada uma.\n");
        printf("4 - Escolha de atributos para comparação: O usuário escolhe dois atributos para comparação\n");
        printf("5 - Exibição da comparação: O programa mostra os atributos comparados e a soma dos valores.\n");
        printf("6 - Resultado da comparação: O programa determina e exibe qual carta venceu com base na soma dos atributos.\n");
        break;

    case 3:
        printf("Finalizando o jogo... Até mais!\n");
        break;

    default:
        printf("Opção inválida.\n");
    }

    return 0;
}