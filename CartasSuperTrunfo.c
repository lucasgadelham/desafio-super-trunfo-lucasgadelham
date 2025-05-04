#include <stdio.h>
#include <string.h>

int main(){

    //Carta 1
    char estado;
    char codigoCarta[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePop;
    float pibPerCapita;

    //Carta 2
    char estado2;
    char codigoCarta2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePop2;
    float pibPerCapita2;

    printf("====== CADASTRO DE CARTAS ======\n");
    printf("Vamos preencher as informações da carta 1: \n");

    printf("Digite o estado: \n> ");
    scanf(" %c", &estado);

    printf("Digite o código da carta: \n> ");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade: \n> ");
    getchar();
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite a quantidade da população: \n> ");
    scanf("%d", &populacao);

    printf("Digite a área: \n> ");
    scanf("%f", &area);

    printf("Digite o PIB: \n> ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n> ");
    scanf("%d", &pontosTuristicos);

    printf("\nAgora vamos preencher as informações da carta 2: \n");

    printf("Digite o estado: \n> ");
    scanf(" %c", &estado2);

    printf("Digite o código: \n> ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: \n> ");
    getchar();
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a quantidade da população: \n> ");
    scanf("%d", &populacao2);

    printf("Digite a área: \n> ");
    scanf("%f", &area2);

    printf("Digite o PIB: \n> ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n> ");
    scanf("%d", &pontosTuristicos2);

    //Calcular PIB e Densidade
    densidadePop = populacao / area;
    pibPerCapita = (pib * 1e9) / populacao;
    densidadePop2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    printf("\n====== CARTA 1 ======\n");
    printf("ESTADO: %c \n", estado);
    printf("CÓDIGO: %s \n", codigoCarta);
    printf("NOME DA CIDADE: %s \n", cidade);
    printf("POPULAÇÃO: %d \n", populacao);
    printf("ÁREA: %.2f KM2 \n", area);
    printf("PIB: %.2f BILHÕES DE REAIS \n", pib);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d \n", pontosTuristicos);
    printf("DENSIDADE POPULACIONAL: %.2f HAB/KM2\n", densidadePop);
    printf("PIB PER CAPITA: %.2f REAIS\n", pibPerCapita);

    printf("\n====== CARTA 2 ======\n");
    printf("ESTADO: %c \n", estado2);
    printf("CÓDIGO: %s \n", codigoCarta2);
    printf("NOME DA CIDADE: %s \n", cidade2);
    printf("POPULAÇÃO: %d \n", populacao2);
    printf("ÁREA: %.2f KM2 \n", area2);
    printf("PIB: %.2f BILHÕES DE REAIS \n", pib2);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d \n", pontosTuristicos2);
    printf("DENSIDADE POPULACIONAL: %.2f HAB/KM2\n", densidadePop2);
    printf("PIB PER CAPITA: %.2f REAIS\n", pibPerCapita2);

    return 0;

}