#include <stdio.h>

int main() {

    char cidade[20], cidade2[20];
    char estado[20], estado2[20];
    int populacao, populacao2;
    float area, area2;
    float PIB, PIB2;
    int pontosTuristicos, pontosTuristicos2;

    // Entrada de Dados da Carta 1
    printf("Digite o nome da cidade:\n");
    scanf("%s", estado);

    printf("Digite o código da cidade:\n");
    scanf("%s", cidade);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados da Carta 2
    printf("Digite o nome da cidade:\n");
    scanf("%s", estado2);

    printf("Digite o código da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2);

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

    // Comparação das cartas
    if (populacao > populacao2) {
        printf("A carta 1 é mais forte na categoria População.\n");
    } else if (populacao < populacao2) {
        printf("A carta 2 é mais forte na categoria População.\n");
    } else {
        printf("As cartas são iguais na categoria População.\n");
    }

    if (area > area2) {
        printf("A carta 1 é mais forte na categoria Área.\n");
    } else if (area < area2) {
        printf("A carta 2 é mais forte na categoria Área.\n");
    } else {
        printf("As cartas são iguais na categoria Área.\n");
    }
    if (PIB > PIB2) {
        printf("A carta 1 é mais forte na categoria PIB.\n");
    } else if (PIB < PIB2) {
        printf("A carta 2 é mais forte na categoria PIB.\n");
    } else {
        printf("As cartas são iguais na categoria PIB.\n");
    }

    if (pontosTuristicos > pontosTuristicos2) {
        printf("A carta 1 é mais forte na categoria Pontos Turísticos.\n");
    } else if (pontosTuristicos < pontosTuristicos2) {
        printf("A carta 2 é mais forte na categoria Pontos Turísticos.\n");
    } else {
        printf("As cartas são iguais na categoria Pontos Turísticos.\n");
    }

    // Verifica se as cartas são iguais
    if (populacao == populacao2 && area == area2 && PIB == PIB2 && pontosTuristicos == pontosTuristicos2) {
        printf("As cartas são iguais.\n");
    } else {
        printf("As cartas são diferentes.\n");
    }
    // Verifica se a carta 1 é mais forte que a carta 2
    if (populacao > populacao2 && area > area2 && PIB > PIB2 && pontosTuristicos > pontosTuristicos2) {
        printf("A carta 1 é mais forte que a carta 2.\n");
    } else if (populacao2 > populacao && area2 > area && PIB2 > PIB && pontosTuristicos2 > pontosTuristicos) {
        printf("A carta 2 é mais forte que a carta 1.\n");
    } else {
        printf("Nenhuma das cartas é mais forte que a outra.\n");
    }
    return 0;
}