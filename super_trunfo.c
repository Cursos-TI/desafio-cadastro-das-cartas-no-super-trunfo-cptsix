#include <stdio.h>

int main() {

    printf("\n\nSuper Trunfo em 'C' (Novato)\n");

    //Variaveis Carta 
    char estado1;
    char codigo1[3];
    char cidade1[15];
    int populacao1, turismo1;
    float area1, pib1;
    
    //Variaveis Carta 2
    char estado2;
    char codigo2[3];
    char cidade2[15];
    int populacao2, turismo2;
    float area2, pib2;

    //Pesquisa Carta 01
    printf("\n     Cadastro - Carta 01\n\n");
    printf("Qual o estado escolhido? ");
    scanf("%s", &estado1);
    printf("Qual o codigo do estado? ");
    scanf("%s", &codigo1);
    printf("Qual a cidade escolhida? ");
    scanf("%s", &cidade1);
    printf("Quantos habitantes tem? ");
    scanf("%i", &populacao1);
    printf("Quantos pontos turisticos tem? ");
    scanf("%i", &turismo1);
    printf("Qual a area(km²)? ");
    scanf("%f", &area1);
    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib1);

    //Pesquisa Carta 02
    printf("\n\n     Cadastro - Carta 02 \n\n");
    printf("Qual o estado escolhido? ");
    scanf("%s", &estado2);
    printf("Qual o codigo do estado? ");
    scanf("%s", &codigo2);
    printf("Qual a cidade escolhida? ");
    scanf("%s", &cidade2);
    printf("Quantos habitantes tem? ");
    scanf("%i", &populacao2);
    printf("Quantos pontos turisticos tem? ");
    scanf("%i", &turismo2);
    printf("Qual a area(km²)? ");
    scanf("%f", &area2);
    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib2);

    //Informativo Carta 1
    printf("\n     Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %i Habitantes \n", populacao1);
    printf("Area: %.2f Km² \n", area1);
    printf("PIB: %.2f reais \n", pib1);
    printf("Pontos turisticos: %i \n", turismo1);

    //Informativo Carta 2
    printf("\n     Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %i Habitantes \n", populacao2);
    printf("Area: %.2f Km² \n", area2);
    printf("PIB: %.2f reais \n", pib2);
    printf("Pontos turisticos: %i \n", turismo2);

    return 0;
}   