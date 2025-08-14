#include <stdio.h>

/*
 *
 * Desafio Super Trunfo - Países
 * Solução Completa (Níveis Novato, Aventureiro e Mestre)
 *
 * Este programa foi desenvolvido para atender aos requisitos dos três níveis do desafio.
 * Ele permite o cadastro de duas cartas, calcula atributos adicionais e, em seguida,
 * compara as cartas com base nesses atributos e em um "Super Poder" calculado.
 *
 */

int main() {
    // Declaração de variáveis para a primeira carta
    unsigned long int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;
    float densidade_carta1;
    float pib_per_capita_carta1;
    float super_poder_carta1;

    // Declaração de variáveis para a segunda carta
    unsigned long int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;
    float densidade_carta2;
    float pib_per_capita_carta2;
    float super_poder_carta2;

    // Nível Novato: Cadastro das Cartas
    printf("--- Cadastro da Primeira Carta ---\n");
    printf("Digite a populacao: ");
    scanf("%lu", &populacao_carta1);
    printf("Digite a area: ");
    scanf("%f", &area_carta1);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    printf("\n--- Cadastro da Segunda Carta ---\n");
    printf("Digite a populacao: ");
    scanf("%lu", &populacao_carta2);
    printf("Digite a area: ");
    scanf("%f", &area_carta2);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    // Nível Aventureiro: Cálculo de Atributos
    // Cálculo dos novos atributos para a primeira carta
    densidade_carta1 = (float)populacao_carta1 / area_carta1;
    pib_per_capita_carta1 = pib_carta1 / (float)populacao_carta1;

    // Cálculo dos novos atributos para a segunda carta
    densidade_carta2 = (float)populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = pib_carta2 / (float)populacao_carta2;

    // Nível Mestre: Comparação e Super Poder
    // Cálculo do Super Poder para as duas cartas
    super_poder_carta1 = (float)populacao_carta1 + area_carta1 + pib_carta1 + (float)pontos_turisticos_carta1 + (1.0 / densidade_carta1) + pib_per_capita_carta1;
    super_poder_carta2 = (float)populacao_carta2 + area_carta2 + pib_carta2 + (float)pontos_turisticos_carta2 + (1.0 / densidade_carta2) + pib_per_capita_carta2;

    printf("\n--- Dados Cadastrados e Calculados ---\n");

    printf("\nCarta 1:\n");
    printf("Populacao: %lu\n", populacao_carta1);
    printf("Area: %.2f\n", area_carta1);
    printf("PIB: %.2f\n", pib_carta1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_carta1);
    printf("Densidade Populacional: %.2f\n", densidade_carta1);
    printf("PIB per Capita: %.2f\n", pib_per_capita_carta1);
    printf("Super Poder: %.2f\n", super_poder_carta1);

    printf("\nCarta 2:\n");
    printf("Populacao: %lu\n", populacao_carta2);
    printf("Area: %.2f\n", area_carta2);
    printf("PIB: %.2f\n", pib_carta2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f\n", densidade_carta2);
    printf("PIB per Capita: %.2f\n", pib_per_capita_carta2);
    printf("Super Poder: %.2f\n", super_poder_carta2);

    printf("\n--- Comparacao (1 = Carta 1 vence, 0 = Carta 2 vence) ---\n");

    printf("\nPopulacao (maior vence): %d\n", populacao_carta1 > populacao_carta2 ? 1 : 0);
    printf("Area (maior vence): %d\n", area_carta1 > area_carta2 ? 1 : 0);
    printf("PIB (maior vence): %d\n", pib_carta1 > pib_carta2 ? 1 : 0);
    printf("Pontos Turisticos (maior vence): %d\n", pontos_turisticos_carta1 > pontos_turisticos_carta2 ? 1 : 0);
    printf("Densidade (menor vence): %d\n", densidade_carta1 < densidade_carta2 ? 1 : 0);
    printf("PIB per Capita (maior vence): %d\n", pib_per_capita_carta1 > pib_per_capita_carta2 ? 1 : 0);
    printf("Super Poder (maior vence): %d\n", super_poder_carta1 > super_poder_carta2 ? 1 : 0);

    return 0;
}
