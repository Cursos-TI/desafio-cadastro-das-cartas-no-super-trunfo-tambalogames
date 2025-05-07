#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50 // Tamanho máximo para strings

// Função para ler os dados de uma carta
void lerCarta(char cidade[], char estado[], int *populacao, float *area, float *PIB, int *pontosTuristicos) {
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);

    printf("Digite o nome do estado:\n");
    scanf("%s", estado);

    printf("Digite a população da cidade:\n");
    scanf("%d", populacao);

    printf("Digite a área da cidade:\n");
    scanf("%f", area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", PIB);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", pontosTuristicos);
}

// Função para exibir os dados de uma carta
void exibirCarta(const char cidade[], const char estado[], int populacao, float area, float PIB, int pontosTuristicos) {
    printf("Nome da cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);
}

int main() {
    char cidade1[MAX], estado1[MAX];
    char cidade2[MAX], estado2[MAX];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    lerCarta(cidade1, estado1, &populacao1, &area1, &PIB1, &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    lerCarta(cidade2, estado2, &populacao2, &area2, &PIB2, &pontosTuristicos2);

    // Exibição dos dados da Carta 1
    printf("\n=== Dados da Carta 1 ===\n");
    exibirCarta(cidade1, estado1, populacao1, area1, PIB1, pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\n=== Dados da Carta 2 ===\n");
    exibirCarta(cidade2, estado2, populacao2, area2, PIB2, pontosTuristicos2);

    return 0;
}