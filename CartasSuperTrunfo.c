#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Definição da estrutura para uma carta
typedef struct {
    char estado[3];
    char codigo[10];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// Função para ler os dados de uma carta
void ler_carta(Carta *carta) {
    printf("--- Cadastro da Carta ---\n");
    printf("Estado (ex: SP): ");
    scanf("%s", carta->estado);
    printf("Codigo da carta (ex: SP01): ");
    scanf("%s", carta->codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->nome_cidade); // O espaço antes do %[^\n] é para consumir o '\n' pendente.
    printf("Populacao: ");
    scanf("%d", &carta->populacao);
    printf("Area (km2): ");
    scanf("%f", &carta->area);
    printf("PIB (bilhoes R$): ");
    scanf("%f", &carta->pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta->num_pontos_turisticos);

    // Cálculos automáticos
    carta->densidade_populacional = (float)carta->populacao / carta->area;
    carta->pib_per_capita = (carta->pib * 1000000000) / carta->populacao;
}

// Função para exibir os detalhes de uma carta
void exibir_carta(Carta carta) {
    printf("Estado: %s\n", carta.estado);
    printf("Codigo: %s\n", carta.codigo);
    printf("Nome da cidade: %s\n", carta.nome_cidade);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f km2\n", carta.area);
    printf("PIB: %.2f bilhoes\n", carta.pib);
    printf("Pontos Turisticos: %d\n", carta.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta.densidade_populacional);
    printf("PIB per capita: %.2f R$\n", carta.pib_per_capita);
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // Declaração das duas cartas
    Carta carta1;
    Carta carta2;

    // --- Entrada de Dados do Usuário ---
    printf("--- Cadastro da Carta 1 ---\n");
    ler_carta(&carta1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    ler_carta(&carta2);

    void exibir_carta(carta1);
    void exibir_carta(carta2);

    return 0;
}
