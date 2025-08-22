#include <stdio.h>

int main() {
    // carta 1
    char estado1[15], codigo1[15], nomecidade1[25];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // carta 2
    char estado2[15], codigo2[15], nomecidade2[25];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    //  CARTA 1
    printf("Digite o estado da Carta 1: \n");
    scanf("%s", estado1);
    printf("Seu estado é: %s\n\n", estado1);

    printf("Digite o código da Carta 1: \n");
    scanf("%s", codigo1);
    printf("Seu código é: %s\n\n", codigo1);

    printf("Digite o nome da cidade da Carta 1: \n");
    scanf("%s", nomecidade1);
    printf("O nome da cidade é: %s\n\n", nomecidade1);

    printf("Digite a população da Carta 1: \n");
    scanf("%lu", &populacao1);
    printf("A população é: %lu\n\n", populacao1);

    printf("Digite a área da Carta 1 (em km²): \n");
    scanf("%f", &area1);
    printf("A área é: %.2f km²\n\n", area1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib1);
    printf("O PIB é: %.2f \n\n", pib1);

    printf("Digite o número de pontos turísticos da Carta 1: \n");
    scanf("%d", &pontos1);
    printf("Número de pontos turísticos: %d\n\n", pontos1);

    // ================= CARTA 2 =================
    printf("Digite o estado da Carta 2: \n");
    scanf("%s", estado2);
    printf("Seu estado é: %s\n\n", estado2);

    printf("Digite o código da Carta 2: \n");
    scanf("%s", codigo2);
    printf("Seu código é: %s\n\n", codigo2);

    printf("Digite o nome da cidade da Carta 2: \n");
    scanf("%s", nomecidade2);
    printf("O nome da cidade é: %s\n\n", nomecidade2);

    printf("Digite a população da Carta 2: \n");
    scanf("%lu", &populacao2);
    printf("A população é: %lu\n\n", populacao2);

    printf("Digite a área da Carta 2 (em km²): \n");
    scanf("%f", &area2);
    printf("A área é: %.2f km²\n\n", area2);

    printf("Digite o PIB da Carta 2 : \n");
    scanf("%f", &pib2);
    printf("O PIB é: %.2f \n", pib2);

    printf("Digite o número de pontos turísticos da Carta 2: \n");
    scanf("%d", &pontos2);
    printf("Número de pontos turísticos: %d\n\n", pontos2);

    //CÁLCULOS 
    float densidade1 = (float)populacao1 / area1;
    float pibpercapita1 = (pib1 * 1000000000.0) / populacao1;

    float densidade2 = (float)populacao2 / area2;
    float pibpercapita2 = (pib2 * 1000000000.0) / populacao2;

    float superpoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + pontos1 + pibpercapita1 + (1.0 / densidade1);
    float superpoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + pontos2 + pibpercapita2 + (1.0 / densidade2);

    //  RESULTADOS 
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    //  COMPARAÇÕES 
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos1 > pontos2) ? 1 : 2, pontos1 > pontos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpercapita1 > pibpercapita2) ? 1 : 2, pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2) ? 1 : 2, superpoder1 > superpoder2);

    return 0;
}



