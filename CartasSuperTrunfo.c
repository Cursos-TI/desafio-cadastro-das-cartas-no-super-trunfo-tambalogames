#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definição da Estrutura da Carta
    int codigo;
    char nome[20];
    double populacao; 
    float area;
    float PIB;
    int pontosTuristicos; 

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome);

    printf("Digite o código da cidade:\n");
    scanf("%d", &codigo);

    printf("Digite a população da cidade:\n");
    scanf("%lf", &populacao); 

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

    return 0;
}
