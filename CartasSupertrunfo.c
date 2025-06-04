#include <stdio.h>



int main(){

 

    printf("\nDesafio Super Trunfo\n");

   

    char estado[50];

    char codigo[10]; // A.H., A01

    char cidade[50];

    float populacao;

    float area;

    float PIB;

    int pontosturisticos;



    printf("*Carta 1\n*");

    printf("Digite o estado da carta 1 (A-H): \n");

    scanf("%s", estado);

    printf("Digite o codigo da carta 1 (ex: A01):\n");

    scanf("%s", codigo);

    printf("Digite o nome da cidade da carta 1: \n");

    scanf("%s", cidade);

    printf("Digite a população da cidade da carta 1(em milhões):\n");

    scanf("%f", &populacao);

    printf("Digite a área da cidade da carta 1 (em km²):\n ");

    scanf("%f", &area);

    printf("Digite o PIB da cidade da carta 1(em milhões de reais):\n ");

    scanf("%f", &PIB);

    printf("Digite o número de pontos turístios da carta 1:\n ");

    scanf("%d", &pontosturisticos);



    printf("*Carta 2*\n");

    printf("Digite o estado da carta 2 (A-H):\n ");

    scanf("%s", estado);

    printf("Digite o codigo da carta 2 (ex: A01): \n");

    scanf("%s", codigo);

    printf("Digite o nome da cidade da carta 2:\n ");

    scanf("%s", cidade);

    printf("Digite a população da cidade da carta 2 (em Mil):\n ");

    scanf("%f", &populacao);

    printf("Digite a área da cidade da carta 2 (em km²):\n ");

    scanf("%f", &area);

    printf("Digite o PIB da cidade da carta 2 (em Milhões de reais):\n ");

    scanf("%f", &PIB);

    printf("Digite o número de pontos turístios da carta 2:\n ");

    scanf("%d", &pontosturisticos);



       //Exibição carta 1



       printf("\nInformações da carta 1:\n");

       printf("Estado: %s\n", estado);

       printf("Código: %s\n", codigo);

       printf("Cidade: %s\n", cidade);

       printf("População: %f\n", populacao);

       printf("Área: %fkm²\n", area);

       printf("PIB: R$%f\n", PIB);

       printf ("Pontos Turísticos: %d\n", pontosturisticos);



     //Exibição carta 2



     printf("\nInformações da carta 2:\n");

     printf("Estado: %s\n", estado);

     printf("Código: %s\n", codigo);

     printf("Cidade: %s\n", cidade);

     printf("População: %f\n", populacao);

     printf("Área: %fkm²\n", area);

     printf("PIB: R$%f\n", PIB);

     printf ("Pontos Turísticos: %d\n", pontosturisticos);

// LINK DO MEU REPOSITÓRIO: https://github.com/anaafreitas/Programando-em-C-Faculdade
