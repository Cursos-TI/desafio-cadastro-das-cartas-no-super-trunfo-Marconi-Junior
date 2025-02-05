#include <stdio.h>

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

    return 0;
}
