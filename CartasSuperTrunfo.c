#include <stdio.h>

int main(){
    int populacao1, populacao2, turistico1, turistico2;
    double area1, area2, pib1, pib2;
    char estado1[50], estado2[50], codigo1[20], codigo2[20], cidade1[50], cidade2[50];
    
    printf("Super Trunfo \nColoque nas perguntas a baixo informações de cartas para usar no jogo Super Trunfo\n");
    printf("\nCarta 1\n");

    printf("\nDigite a primeira letra de um Estado do Brasil: \n");
    scanf("%s", estado1);

    printf("Digite o código para está carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome de uma Cidade do Estado escolhido: \n");
    scanf(" %[^\n]", cidade1);

    printf("Digeite a População da Cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade: \n");
    scanf("%lf", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib1);

    printf("Pontos turisticos: \n");
    scanf("%d", &turistico1);


    printf("\nCarta 2\n");

    printf("\nDigite a primeira letra de um Estado do Brasil: \n");
    scanf("%s", estado2);

    printf("Digite o código para está carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade do Estado escolhido: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digeite a População da Cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade: \n");
    scanf("%lf", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib2);

    printf("Pontos turisticos: \n");
    scanf("%d", &turistico2);

    float densidadepopu1 = (populacao1 / area1), densidadepopu2 = (populacao2 / area2);
    float pibcapita1 = (pib1 / populacao1), pibcapita2 = (pib2 / populacao2);


    printf("\nCarta 1\n \nEstado: %s \nCódigo: %s \nCidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: R$ %.2f \nPontos turísticos: %d\n\
Densidade Populacional: %.2f \nPIB per Capita: %.2f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, turistico1, densidadepopu1, pibcapita1);

         
    printf("\nCarta 2\n \nEstado: %s \nCódigo: %s \nCidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: R$ %.2f \nPontos turísticos: %d \n\
Densidade Populacional: %.2f \nPIB per Capita: %.2f", estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2, densidadepopu2, pibcapita2);

         
    return 0;

}