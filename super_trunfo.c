#include <stdio.h>
#include <string.h>

int main() {

    printf("\n\nSuper Trunfo em 'C' (Mestre)\n");

    //Variaveis Carta 
    char estado1;
    char codigo1[4];
    char cidade1[30];
    unsigned long int populacao1;
    int turismo1;
    float area1, pib1;
    
    //Variaveis Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[30];
    unsigned long int populacao2;
    int turismo2;
    float area2, pib2;

    //Pesquisa Carta 01

    printf("\n     Cadastro - Carta 01\n\n");
    printf("Qual o estado escolhido? ");
    scanf("%c", &estado1);
    printf("Qual o codigo do estado? ");
    scanf("%s", codigo1);
    getchar();
    printf("Qual a cidade escolhida? ");
    fgets(cidade1,sizeof(cidade1),stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    printf("Quantos habitantes tem? ");
    scanf("%u", &populacao1);
    printf("Quantos pontos turisticos tem? ");
    scanf("%i", &turismo1);
    printf("Qual a area(km²)? ");
    scanf("%f", &area1);
    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib1);

    //Pesquisa Carta 02

    printf("\n\n     Cadastro - Carta 02 \n\n");
    printf("Qual o estado escolhido? ");
    scanf(" %c", &estado2);
    printf("Qual o codigo do estado? ");
    scanf("%s", codigo2);
    getchar();
    printf("Qual a cidade escolhida? ");
    fgets(cidade2, sizeof(cidade2) ,stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("Quantos habitantes tem? ");
    scanf("%u", &populacao2);
    printf("Quantos pontos turisticos tem? ");
    scanf("%i", &turismo2);
    printf("Qual a area(km²)? ");
    scanf("%f", &area2);
    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib2);

    //Calculos Carta 1
    float densidade1 = (float) populacao1 / area1;
    float ppc1 = (float) pib1 / populacao1;
    float super1 = (float) populacao1 + area1 + pib1 + turismo1 + ppc1 + (densidade1*-1);

    //Calculos Carta 2
    float densidade2 = (float) populacao2 / area2;
    float ppc2 = (float) pib2 / populacao2;
    float super2 = (float) populacao2 + area2 + pib2 + turismo2 + ppc2 + (densidade2*-1);

    printf("\n\n       >>>> Cartas Cadastradas: <<<<< \n");

    //Informativo Carta 1
    printf("\n     Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %u Habitantes \n", populacao1);
    printf("Area: %.2f Km² \n", area1);
    printf("PIB: %.2f reais \n", pib1);
    printf("Pontos turisticos: %i \n", turismo1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais \n", ppc1);
    printf("Super: %.2f \n", super1);

    //Informativo Carta 2
    printf("\n     Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %u Habitantes \n", populacao2);
    printf("Area: %.2f Km² \n", area2);
    printf("PIB: %.2f reais \n", pib2);
    printf("Pontos turisticos: %i \n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais \n", ppc2);
    printf("Super: %.2f \n", super2);

    //Combate de cartas

    printf("\n      Hora da Batalha     \n\n");

    printf("A populacao de %s e maior que a de %s? %i \n", cidade1, cidade2, populacao1 > populacao2);
    printf("A Area de %s e maior que a de %s? %i \n", cidade1, cidade2, area1 > area2);
    printf("O PIB de %s e maior que a de %s? %i \n", cidade1, cidade2, pib1 > pib2);
    printf("A quantidade de Pontos Turisticos de %s e maior que a de %s? %i \n", cidade1, cidade2, turismo1 > turismo2);
    printf("O Pib per Capita de %s e maior que a de %s? %i \n", cidade1, cidade2, ppc1 > ppc2);
    printf("A Densidade de %s e menor que a de %s? %i \n", cidade1, cidade2, densidade1 < densidade2);
    printf("A Super de %s e maior que a de %s? %i \n", cidade1, cidade2, super1 > super2);
    
    return 0;
}
