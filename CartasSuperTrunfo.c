#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definição da Estrutura da Carta
    int código;
    char nome[20];
    int população;
    float área;
    float PIB;
    int pontosturísticos;

    printf("digite o nome da cidade:\n ");
    scanf("%s", nome);

    printf("digite o código da cidade:\n ");
    scanf("%d", &código);

    printf("digite a população da cidade:\n ");
    scanf("%lf", &população);

    printf("digite a área da cidade:\n ");
    scanf("%f", &área);

    printf("digite o PIB da cidade:\n ");
    scanf("%f", &PIB);

    printf("digite o número de pontos turísticos da cidade:\n ");
    scanf("%d", &pontosturísticos);

    // Exibição dos Dados da Carta
    printf("Nome da cidade: %s\n", nome);
    printf("Código da cidade: %d\n", código);
    printf("População da cidade: %.2lf\n", população);
    printf("Área da cidade: %.2f\n", área);
    printf("PIB da cidade: %.2f\n", PIB);
    printf("Número de pontos turísticos da cidade: %d\n", pontosturísticos);

     
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
