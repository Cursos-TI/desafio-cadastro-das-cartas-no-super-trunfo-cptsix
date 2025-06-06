#include <stdio.h>
#include <string.h>

int main() {

    printf("\n\nSuper Trunfo em 'C' (Mestre)\n");

    //Variaveis Carta 
    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    int turismo1;
    float area1, pib1;
    
    //Variaveis Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
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
    scanf("%d", &populacao1);
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
    scanf("%d", &populacao2);
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
    printf("Populacao: %d Habitantes \n", populacao1);
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
    printf("Populacao: %d Habitantes \n", populacao2);
    printf("Area: %.2f Km² \n", area2);
    printf("PIB: %.2f reais \n", pib2);
    printf("Pontos turisticos: %i \n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais \n", ppc2);
    printf("Super: %.2f \n", super2);

    //Escolha de atributo
    int escolha1;
    int escolha2;
    int result1;
    int result2;
    int resultfinal;

    printf("\n\n\n      Hora da Batalha     \n");

    printf("Escolha o primeiro atributo de combate: \n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n\n");
    scanf("%i", &escolha1);

    switch (escolha1) {
        case 1:
        printf("\n Escolha o segundo atributo de combate: \n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n\n");
        break;
        
        case 2:
        printf("\n Escolha o segundo atributo de combate: \n");
        printf("1 - Populacao\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n\n");
        break;

        case 3:
        printf("\n Escolha o segundo atributo de combate: \n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n\n");
        break;

        case 4:
        printf("Escolha o segundo atributo de combate: \n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("5 - Densidade Demografica\n\n");
        break;

        case 5:
        printf("\n Escolha o segundo atributo de combate: \n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        break;
        
        default:
        printf("\n Opção Inválida!");
    }
    scanf(" %i", &escolha2);

// batalha de atributos selecionados
    switch (escolha1) {

        case 1:
            printf("\n Atributo escolhido: Populacao\n");
            printf(" %s: %d\n", cidade1, populacao1);
            printf(" %s: %d\n", cidade2, populacao2);
            result1 = populacao1 > populacao2 ? 1 : 0 ;
            if (populacao1 > populacao2) {
            printf("Resultado: %s venceu!\n",cidade1);
            } else if (populacao1 < populacao2) {
            printf("Resultado: %s venceu!\n",cidade2);
            } else {
            printf("Resultado: Empate");
            }
            break;
        
        case 2:
            printf("\n Atributo escolhido: Area\n");
            printf(" %s: %.2f\n", cidade1, area1);
            printf(" %s: %.2f\n", cidade2, area2);
            result1 = area1 > area2 ? 1 : 0 ;
            if (area1 > area2) {
            printf("Resultado: %s venceu!\n",cidade1);
            } else if (area1 < area2) {
            printf("Resultado: %s venceu!\n",cidade2);
            } else {
            printf("Resultado: Empate");
            }
            break;
        
        case 3:
            printf("\n Atributo escolhido: PIB\n");
            printf(" %s: %.2f\n", cidade1, pib1);
            printf(" %s: %.2f\n", cidade2, pib2);
            result1 = pib1 > pib2 ? 1 : 0 ;
            if (pib1 > pib2) {
            printf("Resultado: %s venceu!\n",cidade1);
            } else if (pib1 < pib2) {
            printf("Resultado: %s venceu!\n",cidade2);
            } else {
            printf("Resultado: Empate");
            }
            break;
        
        case 4:
            printf("\n Atributo escolhido: Pontos Turisticos\n");
            printf(" %s: %i\n", cidade1, turismo1);
            printf(" %s: %i\n", cidade2, turismo2);
            result1 = turismo1 > turismo2 ? 1 : 0 ;
            if (turismo1 > turismo2) {
            printf("Resultado: %s venceu!\n",cidade1);
            } else if (turismo1 < turismo2) {
            printf("Resultado: %s venceu!\n",cidade2);
            } else {
            printf("Resultado: Empate");
            }
            break;
        
        case 5:
            printf("\n Atributo escolhido: Densidade Demografica\n");
            printf(" %s: %.2f\n", cidade1, densidade1);
            printf(" %s: %.2f\n", cidade2, densidade2);
            result1 = densidade1 < densidade2 ? 1 : 0 ;
            if (densidade1 < densidade2) {
            printf("Resultado: %s venceu!\n",cidade1);
            } else if (densidade1 > densidade2) {
            printf("Resultado: %s venceu!\n",cidade2);
            } else {
            printf("Resultado: Empate");
            }
            break;
    
        }

    switch (escolha2) {

        case 1:
            printf("\n Atributo escolhido: Populacao\n");
            printf(" %s: %d\n", cidade1, populacao1);
            printf(" %s: %d\n", cidade2, populacao2);
            result2 = populacao1 > populacao2 ? 1 : 0 ;
            if (populacao1 > populacao2) {
            printf("Resultado: %s venceu!\n",cidade1);
            } else if (populacao1 < populacao2) {
            printf("Resultado: %s venceu!\n",cidade2);
            } else {
            printf("Resultado: Empate");
            }
            break;
        
        case 2:
            printf("\n Atributo escolhido: Area\n");
            printf(" %s: %.2f\n", cidade1, area1);
            printf(" %s: %.2f\n", cidade2, area2);
            result2 = area1 > area2 ? 1 : 0 ;
            if (area1 > area2) {
            printf("Resultado: %s venceu!\n",cidade1);
            } else if (area1 < area2) {
            printf("Resultado: %s venceu!\n",cidade2);
            } else {
            printf("Resultado: Empate");
            }
            break;
        
        case 3:
            printf("\n Atributo escolhido: PIB\n");
            printf(" %s: %.2f\n", cidade1, pib1);
            printf(" %s: %.2f\n", cidade2, pib2);
            result2 = pib1 > pib2 ? 1 : 0 ;
            if (pib1 > pib2) {
            printf("Resultado: %s venceu!\n",cidade1);
            } else if (pib1 < pib2) {
            printf("Resultado: %s venceu!\n",cidade2);
            } else {
            printf("Resultado: Empate");
            }
            break;
        
        case 4:
            printf("\n Atributo escolhido: Pontos Turisticos\n");
            printf(" %s: %i\n", cidade1, turismo1);
            printf(" %s: %i\n", cidade2, turismo2);
            result2 = turismo1 > turismo2 ? 1 : 0 ;
            if (turismo1 > turismo2) {
            printf("Resultado: %s venceu!\n",cidade1);
            } else if (turismo1 < turismo2) {
            printf("Resultado: %s venceu!\n",cidade2);
            } else {
            printf("Resultado: Empate");
            }
            break;
        
        case 5:
            printf("\n Atributo escolhido: Densidade Demografica\n");
            printf(" %s: %.2f\n", cidade1, densidade1);
            printf(" %s: %.2f\n", cidade2, densidade2);
            result2 = densidade1 < densidade2 ? 1 : 0 ;
            if (densidade1 < densidade2) {
            printf("Resultado: %s venceu!\n",cidade1);
            } else if (densidade1 > densidade2) {
            printf("Resultado: %s venceu!\n",cidade2);
            } else {
            printf("Resultado: Empate");
            }
            break;
    
        }
    resultfinal = result1 + result2;
    printf(" \n Resultado Final:\n ");

    switch (resultfinal) {
    case 0:
        printf("%s ganhou a batalha", cidade2);
        break;
    case 2:
        printf("%s ganhou a batalha", cidade1);
        break;
    default:
        printf("Empate!");
        break;
    }
return 0;
}
