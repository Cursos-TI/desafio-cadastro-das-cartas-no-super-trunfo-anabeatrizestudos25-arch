#include <stdio.h>

int main() {

    // carta 1
    char estado1[15];
    char codigo1[15];
    char nomecidade1[25];
    int populacao1;
    float area1;
    float pib1;
    int numerodepontosturisticos1;

    // carta 2
    char estado2[15];
    char codigo2[15];
    char nomecidade2[25];
    int populacao2;
    float area2;
    float pib2;
    int numerodepontosturisticos2;

    // entrada carta 1
    printf("Digite o estado da Carta 1: \n");
    scanf("%s", estado1);
    printf("Seu estado é: %s\n\n", estado1);

    printf("Digite o código da Carta 1: \n");
    scanf("%s", codigo1);
    printf("Seu código é: %s\n\n", codigo1);

    printf("Digite o nome da cidade da Carta 1: \n");
    scanf("%s", nomecidade1);
    printf("O nome da cidade é: %s\n\n", nomecidade1);

    printf("Digite o tamanho da população da Carta 1: \n");
    scanf("%d", &populacao1);
    printf("O número da população é: %d\n\n", populacao1);

    printf("Digite o tamanho da área da Carta 1: \n");
    scanf("%f", &area1);
    printf("Sua área é: %.2f km²\n\n", area1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib1);
    printf("Seu PIB é: %.2f bilhões de reais\n\n", pib1);

    printf("Digite o número de pontos turísticos da Carta 1: \n");
    scanf("%d", &numerodepontosturisticos1);
    printf("O número de pontos turísticos é: %d\n\n", numerodepontosturisticos1);


    // entrada carta 2
    printf("Digite o estado da Carta 2: \n");
    scanf("%s", estado2);
    printf("Seu estado é: %s\n\n", estado2);

    printf("Digite o código da Carta 2: \n");
    scanf("%s", codigo2);
    printf("Seu código é: %s\n\n", codigo2);

    printf("Digite o nome da cidade da Carta 2: \n");
    scanf("%s", nomecidade2);
    printf("O nome da cidade é: %s\n\n", nomecidade2);

    printf("Digite o tamanho da população da Carta 2: \n");
    scanf("%d", &populacao2);
    printf("O número da população é: %d\n\n", populacao2);

    printf("Digite o tamanho da área da Carta 2: \n");
    scanf("%f", &area2);
    printf("Sua área é: %.2f km²\n\n", area2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib2);
    printf("Seu PIB é: %.2f bilhões de reais\n\n", pib2);

    printf("Digite o número de pontos turísticos da Carta 2: \n");
    scanf("%d", &numerodepontosturisticos2);
    printf("O número de pontos turísticos é: %d\n\n", numerodepontosturisticos2);


    // saída final organizada
    printf("\n- Carta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", numerodepontosturisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", numerodepontosturisticos2);

    return 0;
}
