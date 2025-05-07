#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");
    char codigo[20];
    char nome[20];
    int populacao;
    float area;
    float PIB;
    int pontosTuristicos;

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome);

    printf("Digite o código da cidade:\n");
    scanf("%s", codigo);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados da Carta
    printf("Nome da cidade: %s\n", nome);
    printf("Código da cidade: %s\n", codigo);
    printf("População da cidade: %d\n", populacao);
    printf("Área da cidade: %.2f\n", area);
    printf("PIB da cidade: %.2f\n", PIB);
    printf("Número de pontos turísticos da cidade: %d\n", pontosTuristicos);

    return 0;
}