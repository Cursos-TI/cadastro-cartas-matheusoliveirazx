#include <stdio.h>

int main(){
    int turistico1, turistico2;
    unsigned long int populacao1, populacao2;
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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Digite a Área da Cidade: \n");
    scanf("%lf", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib2);

    printf("Pontos turisticos: \n");
    scanf("%d", &turistico2);

    float densidadepopu1 = (populacao1 / area1), densidadepopu2 = (populacao2 / area2);
    float pibcapita1 = (pib1 / populacao1), pibcapita2 = (pib2 / populacao2);

    long double superpoder1 = populacao1 + area1 + pib1 + turistico1 + pibcapita1 + densidadepopu1;
    long double superpoder2 = populacao2 + area2 + pib2 + turistico2 + pibcapita2 + densidadepopu2;


    printf("\nCarta 1\n \nEstado: %s \nCódigo: %s \nCidade: %s \nPopulação: %lu \nÁrea: %.2f km² \nPIB: R$ %.2f \nPontos turísticos: %d\n\
Densidade Populacional: %.2f \nPIB per Capitá: %.2f \nSuper Poder: %.2Lf \n", estado1, codigo1, cidade1, populacao1, area1, pib1, turistico1, densidadepopu1, pibcapita1, superpoder1);

         
    printf("\nCarta 2\n \nEstado: %s \nCódigo: %s \nCidade: %s \nPopulação: %lu \nÁrea: %.2f km² \nPIB: R$ %.2f \nPontos turísticos: %d \n\
Densidade Populacional: %.2f \nPIB per Capitá: %.2f \nSuper Poder: %.2Lf \n", estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2, densidadepopu2, pibcapita2, superpoder2);


printf("\nComparação de catas\n");
    (populacao1 > populacao2) ? printf("\nPopulação: Carta 1 venceu!\n") :
    (populacao2 > populacao1) ? printf("\nPopulação: Carta 2 venceu!\n") :
    printf("\nPopulação: Empate\n");

    (area1 > area2) ? printf("Area: Carta 1 venceu!\n") :
    (area2 > area1) ? printf("Area: Carta 2 venceu!\n") :
    printf("Area: Empate\n");

    (pib1 > pib2) ? printf("PIB: Carta 1 venceu!\n") :
    (pib2 > pib1) ? printf("PIB: carta 2 venceu!\n") :
    printf("PIB: Empate\n");

    (turistico1 > turistico2) ? printf("Pontos turisticos: Carta 1 venceu!\n") :
    (turistico2 > turistico1) ? printf("Pontos turisticos: Carta 2 venceu!\n") :
    printf("Pontos turisticos: Empate\n");

    (densidadepopu1 < densidadepopu2) ? printf("Densidade populacional: Carta 1 venceu!\n") :
    (densidadepopu2 < densidadepopu1) ? printf("Densidade populacional: Carta 2 venceu!\n") :
    printf("Densidade populacional: Empate\n");

    (pibcapita1 > pibcapita2) ? printf("PIB per Capitá: Carta 1 venceu!\n") :
    (pibcapita2 > pibcapita1) ? printf("PIB per Capitá: Carta 2 venceu!\n") :
    printf("PIB per Capitá: Empate\n");

    (superpoder1 > superpoder2) ? printf("Super Poder: Carta 1 venceu!\n") :
    (superpoder2 > superpoder1) ? printf("Super Poder: Carta 2 venceu!\n") :
    printf("Super Poder: Empate\n");



         
    return 0;

}