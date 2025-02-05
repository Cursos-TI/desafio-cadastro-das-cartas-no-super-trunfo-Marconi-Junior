#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char codigo[5];
    char nomeCidade[30];
    float populacao;
    float area;
    float pib;
    int pontoTuristico;

    printf("Digite o códico da cidade\n");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade\n");
    scanf("%s", &nomeCidade);
    printf("Digite o número de habitantes:\n");
    scanf("%f", &populacao);
    printf("Digite a àrea:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontoTuristico);

    
    printf("\n%s - %s\nPupulação: %f habitantes\nÁrea: %fm²\nPIB: R$%f\nPontos Turísticos: %d\n", codigo, nomeCidade, populacao, area, pib, pontoTuristico);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
