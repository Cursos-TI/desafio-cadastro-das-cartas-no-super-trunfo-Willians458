#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da Carta 1
    printf("Carta 1:\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área(km²): \n");
    scanf("%f \n",&area1);

    printf("PIB (em bilhões): \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\nCarta 2:\n");

    printf("Estado:\n ");
    scanf("%c",&estado2);

    printf("Código:\n ");
    scanf("%s", codigo2);

    printf("Nome da Cidade:\n ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População:\n ");
    scanf("%d\n", &populacao2);

    printf("Área (km²):\n ");
    scanf("%f\n", &area2);

    printf("PIB (em bilhões):\n ");
    scanf("%f\n", &pib2);

    printf("Número de Pontos Turísticos:\n ");
    scanf("%d\n", &pontosTuristicos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f \n km² \n", area1);
    printf("PIB: %f \n bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita2);
    return 0;
}