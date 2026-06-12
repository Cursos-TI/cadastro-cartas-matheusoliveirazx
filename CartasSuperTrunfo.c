#include <stdio.h>

int main(){
    int populacao1, populacao2, turistico1, turistico2;
    float area1, area2, pib1, pib2;
    char estado1[50], estado2[50], codigo1[20], codigo2[20], cidade1[20], cidade2[20];
    
    printf("Super Trunfo \nColoque nas perguntas a baixo informações de cartas para usar no jogo Super Trunfo\n");
    printf("Carta 1\n");

    printf("Digite a primeira letra de um Estado do Brasil: \n");
    scanf("%s", estado1);

    printf("Digite o código para está carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade do Estado escolhido: \n");
    scanf("%s", cidade1);

    printf("Digeite a População da Cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Pontos turisticos: \n");
    scanf("%d", &turistico1);


    printf("Carta 2\n");

    printf("Digite a primeira letra de um Estado do Brasil: \n");
    scanf("%s", estado2);

    printf("Digite o código para está carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade do Estado escolhido: \n");
    scanf("%s", cidade2);

    printf("Digeite a População da Cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Pontos turisticos: \n");
    scanf("%d", &turistico2);




    printf("Carta 1 \nEstado: %s \nCódigo: %s \nCidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: R$ %.2f \nPontos turísticos: %d\n",\
         estado1, codigo1, cidade1, populacao1, area1, pib1, turistico1);

         
    printf("Carta 2 \nEstado: %s \nCódigo: %s \nCidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: R$ %.2f \nPontos turísticos: %d\n",\
         estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2);

    return 0;

    }