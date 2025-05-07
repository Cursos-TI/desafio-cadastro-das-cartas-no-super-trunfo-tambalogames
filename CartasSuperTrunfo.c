#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");
    char codigo;
    char nome[20];
    int populacao; 
    float area;
    float PIB;
    int pontosTuristicos; 

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome);

    printf("Digite o código da cidade:\n");
    scanf("%d", &codigo);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao); 
}
int main() {

    char cidade[20], cidade2[20];
    char estado[20], estado2[20];
    int populacao, populacao2;
    float area, area2;
    float PIB, PIB2;
    int pontosTuristicos, pontosTuristicos2;

    // Entrada de Dados da Carta 1
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);

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
    printf("Código da cidade: %d\n", codigo);
    printf("População da cidade: %.2lf\n", populacao);
    printf("Área da cidade: %.2f\n", area);
    printf("PIB da cidade: %.2f\n", PIB);
    printf("Número de pontos turísticos da cidade: %d\n", pontosTuristicos);

    // Exibição dos Dados da Carta 2
    printf("Digite o nome da cidade:\n");
    scanf("%s", estado2);

    printf("Digite o código da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade:\n");
    scanf("%d", populacao);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados da Carta1
    printf("Nome da cidade: %s\n", estado);
    printf("Código da cidade: %s\n", cidade);
    printf("População da cidade: %d\n", populacao);
    printf("Área da cidade: %.2f\n", area);
    printf("PIB da cidade: %.2f\n", PIB);
    printf("Número de pontos turísticos da cidade: %d\n", pontosTuristicos);

    // Exibição dos Dados da Carta2
    printf("Nome da cidade: %s\n", estado2);
    printf("Código da cidade: %s\n", cidade2);
    printf("População da cidade: %d\n", populacao2);
    printf("Área da cidade: %.2f\n", area2);
    printf("PIB da cidade: %.2f\n", PIB2);
    printf("Número de pontos turísticos da cidade: %d\n", pontosTuristicos2);

    return 0;
}