#include <stdio.h>
#include <string.h>

int main() {

    // variáveis
    char estado1[10], estado2[10];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;
    float densidade_populacional, densidade_populacional2;
    float per_capita, per_capita2;

    // carta 1 - entrada
    printf("Desafio Super Trunfo - Países\n");
    printf("CARTA 1\n");

    printf("Digite a sigla do estado: ");
    scanf("%s", estado1);

    printf("População do estado: ");
    scanf("%d", &populacao1);

    printf("Área do estado: ");
    scanf("%f", &area1);

    printf("PIB do estado: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos do estado: ");
    scanf("%d", &ponto_turistico1);

    // carta 2 - entrada
    printf("CARTA 2\n");

    printf("Digite a sigla do estado: ");
    scanf("%s", estado2);

    printf("População do estado: ");
    scanf("%d", &populacao2);

    printf("Área do estado: ");
    scanf("%f", &area2);

    printf("PIB do estado: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos do estado: ");
    scanf("%d", &ponto_turistico2);

    // carta 1 - saída
    printf("Saída - Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", ponto_turistico1);

    // carta 2 - saída
    printf("Saída - Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", ponto_turistico2);

    // nível 2 do desafio
    printf("Médias - Carta 1\n");
    densidade_populacional = (float) populacao1 / area1;
    printf("A densidade populacional é: %.2f\n", densidade_populacional);
    per_capita = pib1 / (float) populacao1;
    printf("O PIB per capita é: %.2f\n", per_capita);

    printf("Médias - Carta 2\n");
    densidade_populacional2 = (float) populacao2 / area2;
    printf("A densidade populacional é: %.2f\n", densidade_populacional2);
    per_capita2 = pib2 / (float) populacao2;
    printf("O PIB per capita é: %.2f\n", per_capita2);

    // Comparação de Atributos - Escolher um atributo para comparar

    // Comparar População
    printf("\nComparação de População:\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 (Estado %s) venceu! População: %d > %d\n", estado1, populacao1, populacao2);
    } else if (populacao1 < populacao2) {
        printf("Carta 2 (Estado %s) venceu! População: %d > %d\n", estado2, populacao1, populacao2);
    } else {
        printf("Empate em População: %d = %d\n", populacao1, populacao2);
    }

    // Comparar PIB
    printf("\nComparação de PIB:\n");
    if (pib1 > pib2) {
        printf("Carta 1 (Estado %s) venceu! PIB: %.2f > %.2f\n", estado1, pib1, pib2);
    } else if (pib1 < pib2) {
        printf("Carta 2 (Estado %s) venceu! PIB: %.2f > %.2f\n", estado2, pib1, pib2);
    } else {
        printf("Empate em PIB: %.2f = %.2f\n", pib1, pib2);
    }

    // Comparar Densidade Populacional (menor valor vence)
    printf("\nComparação de Densidade Populacional:\n");
    if (densidade_populacional < densidade_populacional2) {
        printf("Carta 1 (Estado %s) venceu! Densidade: %.2f < %.2f\n", estado1, densidade_populacional, densidade_populacional2);
    } else if (densidade_populacional > densidade_populacional2) {
        printf("Carta 2 (Estado %s) venceu! Densidade: %.2f < %.2f\n", estado2, densidade_populacional, densidade_populacional2);
    } else {
        printf("Empate em Densidade Populacional: %.2f = %.2f\n", densidade_populacional, densidade_populacional2);
    }

    // Comparar PIB per capita
    printf("\nComparação de PIB per capita:\n");
    if (per_capita > per_capita2) {
        printf("Carta 1 (Estado %s) venceu! PIB per capita: %.2f > %.2f\n", estado1, per_capita, per_capita2);
    } else if (per_capita < per_capita2) {
        printf("Carta 2 (Estado %s) venceu! PIB per capita: %.2f > %.2f\n", estado2, per_capita, per_capita2);
    } else {
        printf("Empate em PIB per capita: %.2f = %.2f\n", per_capita, per_capita2);
    }

    return 0;
}
