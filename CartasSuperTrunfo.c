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
        float superPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_Per_Capita1 + inverso_Densidade1;

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
        printf("Super Poder: %.2f\n", superPoder1);
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
        float superPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_Per_Capita2 + inverso_Densidade2;

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
        printf("Super Poder: %.2f\n", superPoder2);
        printf("---------------------------------------------------------------\n");

        // Comparação dos Atributos

        int atributo1, atributo2;
        char atributo_comparado1[50], atributo_comparado2[50];
        int resultado1, resultado2;

        //Escolha do primeiro atributo

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

        switch (atributo1) 
        {
        case 1:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "População");
            printf("Cidades: %s vs %s \n", nome1, nome2);
            printf("Atributo comparado: %s \n", atributo_comparado1);
            printf("Valores dos atributos: %u e %u\n", populacao1, populacao2);

            resultado1 = populacao1 > populacao2 ? populacao1 : populacao2;

            if (populacao1 == populacao2)
            {
                printf("\n🤝 Empate!🤝 \n");
            }
            else if (resultado1 == populacao1)
            {
                printf("\n🎉Carta 1 venceu!🎉 \n");
            }
            else
            {
                printf("\n🎉Carta 2 venceu!🎉 \n");
            }
            imprimir_borda();
            break;

        case 2:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "Área");
            printf("Cidades: %s vs %s \n", nome1, nome2);
            printf("Atributo comparado: %s \n", atributo_comparado1);
            printf("Valores dos atributos: %.2f e %.2f\n", area1, area2);

            resultado1 = area1 > area2 ? area1 : area2;

            if (area1 == area2)
            {
                printf("\n🤝Empate!🤝 \n");
            }
            else if (resultado1 == area1)
            {
                printf("\n🎉Carta 1 venceu!🎉 \n");
            }
            else
            {
                printf("\n🎉Carta 2 venceu!🎉 \n\n");
            }
            imprimir_borda();
            break;

        case 3:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "PIB");
            printf("Cidades: %s vs %s \n", nome1, nome2);
            printf("Atributo comparado: %s \n", atributo_comparado1);
            printf("Valores dos atributos: %.2f e %.2f\n", pib1, pib2);

            resultado1 = pib1 > pib2 ? pib1 : pib2;

            if (pib1 == pib2)
            {
                printf("\n🤝Empate!🤝 \n");
            }
            else if (resultado1 == pib1)
            {
                printf("\n🎉Carta 1 venceu!🎉 \n");
            }
            else
            {
                printf("\n🎉Carta 2 venceu!🎉 \n");
            }
            imprimir_borda();
            break;

        case 4:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "Pontos Turísticos");
            printf("Cidades: %s vs %s \n", nome1, nome2);
            printf("Atributo comparado: %s \n", atributo_comparado1);
            printf("Valores dos atributos: %d e %d\n", pontos_turisticos1, pontos_turisticos2);

            resultado1 = pontos_turisticos1 > pontos_turisticos2 ? pontos_turisticos1 : pontos_turisticos2;

            if (pontos_turisticos1 == pontos_turisticos2)
            {
                printf("\n🤝Empate!🤝 \n");
            }
            else if (resultado1 == pontos_turisticos2)
            {
                printf("\n🎉Carta 1 venceu!🎉 \n");
            }
            else
            {
                printf("\n🎉Carta 2 venceu!🎉 \n");
            }
            imprimir_borda();
            break;

        case 5:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "Densidade Populacional");
            printf("Cidades: %s vs %s \n", nome1, nome2);
            printf("Atributo comparado: %s \n", atributo_comparado1);
            printf("Valores dos atributos: %.2f e %.2f\n", Densidade_Populacional1, Densidade_Populacional2);

            resultado1 = Densidade_Populacional1 < Densidade_Populacional2 ? Densidade_Populacional1 : Densidade_Populacional2;

            if (Densidade_Populacional1 == Densidade_Populacional2)
            {
                printf("\n🤝Empate!🤝 \n");
            }
            else if (resultado1 == Densidade_Populacional2)
            {
                printf("\n🎉Carta 1 venceu!🎉 \n");
            }
            else
            {
                printf("\n🎉Carta 2 venceu!🎉 \n");
            }
            imprimir_borda();
            break;

        default:
            printf("\n😕 Opção inválida! Por favor, escolha uma opção entre 1 e 5.\n");
            break;
        }

            switch (atributo2)  
        {
        case 1:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "População");
            printf("Cidades: %s vs %s \n", nome1, nome2);
            printf("Atributo comparado: %s \n", atributo_comparado1);
            printf("Valores dos atributos: %u e %u\n", populacao1, populacao2);

            resultado2 = populacao1 > populacao2 ? populacao1 : populacao2;

            if (populacao1 == populacao2)
            {
                printf("\n🤝 Empate!🤝 \n");
            }
            else if (resultado2 == populacao1)
            {
                printf("\n🎉Carta 1 venceu!🎉 \n");
            }
            else
            {
                printf("\n🎉Carta 2 venceu!🎉 \n");
            }
            imprimir_borda();
            break;

        case 2:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "Área");
            printf("Cidades: %s vs %s \n", nome1, nome2);
            printf("Atributo comparado: %s \n", atributo_comparado1);
            printf("Valores dos atributos: %.2f e %.2f\n", area1, area2);

            resultado2 = area1 > area2 ? area1 : area2;

            if (area1 == area2)
            {
                printf("\n🤝Empate!🤝 \n");
            }
            else if (resultado2 == area1)
            {
                printf("\n🎉Carta 1 venceu!🎉 \n");
            }
            else
            {
                printf("\n🎉Carta 2 venceu!🎉 \n\n");
            }
            imprimir_borda();
            break;

        case 3:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "PIB");
            printf("Cidades: %s vs %s \n", nome1, nome2);
            printf("Atributo comparado: %s \n", atributo_comparado1);
            printf("Valores dos atributos: %.2f e %.2f\n", pib1, pib2);

            resultado2 = pib1 > pib2 ? pib1 : pib2;

            if (pib1 == pib2)
            {
                printf("\n🤝Empate!🤝 \n");
            }
            else if (resultado2 == pib1)
            {
                printf("\n🎉Carta 1 venceu!🎉 \n");
            }
            else
            {
                printf("\n🎉Carta 2 venceu!🎉 \n");
            }
            imprimir_borda();
            break;

        case 4:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "Pontos Turísticos");
            printf("Cidades: %s vs %s \n", nome1, nome2);
            printf("Atributo comparado: %s \n", atributo_comparado1);
            printf("Valores dos atributos: %d e %d\n", pontos_turisticos1, pontos_turisticos2);

            resultado2 = pontos_turisticos1 > pontos_turisticos2 ? pontos_turisticos1 : pontos_turisticos2;

            if (pontos_turisticos1 == pontos_turisticos2)
            {
                printf("\n🤝Empate!🤝 \n");
            }
            else if (resultado2 == pontos_turisticos2)
            {
                printf("\n🎉Carta 1 venceu!🎉 \n");
            }
            else
            {
                printf("\n🎉Carta 2 venceu!🎉 \n");
            }
            imprimir_borda();
            break;

        case 5:
            snprintf(atributo_comparado1, sizeof(atributo_comparado1), "Densidade Populacional");
            printf("Cidades: %s vs %s \n", nome1, nome2);
            printf("Atributo comparado: %s \n", atributo_comparado1);
            printf("Valores dos atributos: %.2f e %.2f\n", Densidade_Populacional1, Densidade_Populacional2);

            resultado2 = Densidade_Populacional1 < Densidade_Populacional2 ? Densidade_Populacional1 : Densidade_Populacional2;

            if (Densidade_Populacional1 == Densidade_Populacional2)
            {
                printf("\n🤝Empate!🤝 \n");
            }
            else if (resultado2 == Densidade_Populacional2)
            {
                printf("\n🎉Carta 1 venceu!🎉 \n");
            }
            else
            {
                printf("\n🎉Carta 2 venceu!🎉 \n");
            }
            imprimir_borda();
            break;
        
        default:
            printf("\n😕 Opção inválida! Por favor, escolha uma opção entre 1 e 5.\n");
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
        printf("\n😕 Opção inválida! Por favor, escolha uma opção entre 1 e 3.\n");
        break;
    }

    return 0;
}