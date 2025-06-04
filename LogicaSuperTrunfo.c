#include <stdio.h>

int main()
{

    char estado1[2], codCarta1[3], nomeDaCidade1[50];
    int numPontosTuristicos1;
    float areaCidade1, PIB1, densiPop1, PIBPC1, superPoder1, inversoDensidade1;
    unsigned long int populacao1;
    
    printf("######################################\n");
    printf("||      SUPER TRUNFO - PAÍSES       ||\n");
    printf("######################################\n\n");
    
    // ENTRADA DE DADOS DA CARTA 1
    
    printf("\nDigite o Estado da carta 1: (A-H) \n");
    scanf("%s", estado1);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codCarta1);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeDaCidade1);
    
    printf("Digite a quantidade da População da cidade: \n");
    scanf("%ld", &populacao1);
    
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &areaCidade1);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);
    
    printf("Digite o numero de pontos turísticos da cidade: \n");
    scanf("%d", &numPontosTuristicos1);
    
    densiPop1 = (float)populacao1 / areaCidade1;
    PIBPC1 = PIB1 / populacao1;
    inversoDensidade1 = 1 / densiPop1;
    superPoder1 = (float)populacao1 + areaCidade1 + PIB1 + numPontosTuristicos1 + PIBPC1 + inversoDensidade1;
    
    
    // ENTRADA DE DADOS DA CARTA 2
    
    char estado2[2], codCarta2[3], nomeDaCidade2[50];
    int numPontosTuristicos2;
    float areaCidade2, PIB2, densiPop2, PIBPC2, superPoder2, inversoDensidade2;
    unsigned long int populacao2;

    
    
    printf("\nDigite o Estado da carta 2: (A-H) \n");
    scanf("%s", estado2);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codCarta2);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeDaCidade2);
    
    printf("Digite a quantidade da População da cidade: \n");
    scanf("%ld", &populacao2);
    
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &areaCidade2);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);
    
    printf("Digite o numero de pontos turísticos da cidade: \n");
    scanf("%d", &numPontosTuristicos2);

    
    
    densiPop2 = populacao2 / areaCidade2;
    PIBPC2 = PIB2 / populacao2;
    inversoDensidade2 = 1 / densiPop2;
    superPoder2 = (float)populacao2 + areaCidade2 + PIB2 + numPontosTuristicos2 + PIBPC2 + inversoDensidade2;

    
    // SAIDA DE DADOS DA CARTA 1
    
    printf("\nCarta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s%s\n", estado1, codCarta1);
    printf("Nome da Cidade: %s \n", nomeDaCidade1);
    printf("População: %ld \n", populacao1);
    printf("Área: %.2f km² \n", areaCidade1);
    printf("PIB: %.2f Bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop1);
    printf("PIB per Capita: %.2f reais\n", PIBPC1);
    printf("Super Poder: %.2f\n\n", superPoder1);
    
    // SAIDA DE DADOS DA CARTA 2
    printf("\nCarta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s%s\n", estado2, codCarta2);
    printf("Nome da Cidade: %s \n", nomeDaCidade2);
    printf("População: %ld \n", populacao2);
    printf("Área: %.2f km² \n", areaCidade2);
    printf("PIB: %.2f Bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop2);
    printf("PIB per Capita: %.2f reais\n", PIBPC2);
    printf("Super Poder: %.2f\n\n", superPoder2);



    // COMPARAÇÃO 1 - MENU DE ESCOLHA
    
    printf("======================================\n");
    printf("|| Comparação de Cartas             ||\n");
    printf("======================================\n");
    printf("|| 1. População                     ||\n");
    printf("|| 2. Área                          ||\n");
    printf("|| 3. PIB                           ||\n");
    printf("|| 4. Número de Pontos Turísticos   ||\n");
    printf("|| 5. Densidade Demográfica         ||\n");
    printf("######################################\n");
    printf("||      Digite sua escolha:         ||\n");
    printf("######################################\n\n");
    
    int opcaoMenu1, resultado1;
    scanf("%d", &opcaoMenu1);
    

    // INICIO DAS COMPARAÇÕES DA OPÇÃO 1.

    switch (opcaoMenu1){

        case 1:
            printf("Opção Escolhida: População.\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;

            if(resultado1 == 1){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("População da Carta 1: %ld \n\n", populacao1);

                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("População da Carta 2: %ld \n\n", populacao2);

                printf("VITÓRIA DA CARTA 1\n");

    
            } else if(resultado1 == 0){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("População da Carta 1: %ld \n\n", populacao1);

                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("População da Carta 2: %ld \n\n", populacao2);

                printf("VITÓRIA DA CARTA 2\n");
    
            } else {
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("População da Carta 1: %ld \n\n", populacao1);

                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("População da Carta 2: %ld \n\n", populacao2);

                printf("EMPATE\n");
            }

            // float opcaoSomatorioMenu1 = populacao1, opcaoSomatorioMenu2 = populacao2;
            break;
        
        case 2:
            printf("Opção Escolhida: PIB.\n");
           resultado1 = PIB1 > PIB2 ? 1 : 0;

           if(resultado1 == 1){
            printf("Nome do País: %s\n", nomeDaCidade1);
            printf("PIB da Carta 1: %.2f \n\n", PIB1);

            printf("Nome do País: %s\n", nomeDaCidade2);
            printf("PIB da Carta 2: %.2f \n\n", PIB2);

            printf("VITÓRIA DA CARTA 1\n");

        } else if(resultado1 == 0){
            printf("Nome do País: %s\n", nomeDaCidade1);
            printf("PIB da Carta 1: %.2f \n\n", PIB1);

            printf("Nome do País: %s\n", nomeDaCidade2);
            printf("PIB da Carta 2: %.2f \n\n", PIB2);

            printf("VITÓRIA DA CARTA 2\n");

        } else {
            printf("Nome do País: %s\n", nomeDaCidade1);
            printf("PIB da Carta 1: %.2f \n\n", PIB1);

            printf("Nome do País: %s\n", nomeDaCidade2);
            printf("PIB da Carta 2: %.2f \n\n", PIB2);

            printf("EMPATE\n");
        }

        break;
        
        case 3:
            printf("Opção Escolhida: Área.\n");
            resultado1 = areaCidade1 > areaCidade2 ? 1 : 0;

            if(resultado1 == 1){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Área da Carta 1: %.2f \n\n", areaCidade1);

                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Área da Carta 2: %.2f \n\n", areaCidade2);

                printf("VITÓRIA DA CARTA 1\n");
    
            } else if(resultado1 == 0){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Área da Carta 1: %.2f \n\n", areaCidade1);

                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Área da Carta 2: %.2f \n\n", areaCidade2);

                printf("VITÓRIA DA CARTA 2\n");
    
            } else {
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Área da Carta 1: %.2f \n\n", areaCidade1);

                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Área da Carta 2: %.2f \n\n", areaCidade2);

                printf("EMPATE\n");
            }

            
        break;
        
        case 4:
            printf("Opção Escolhida: Número de Pontos Turísticos.\n");
            resultado1 = numPontosTuristicos1 > numPontosTuristicos2 ? 1 : 0;
            
            if(resultado1 == 1){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Numero de pontos turísticos da Carta 1: %d \n\n", numPontosTuristicos1);

                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Numero de pontos turísticos da Carta 2: %d \n\n", numPontosTuristicos2);

                printf("VITÓRIA DA CARTA 1\n");
    
            } else if(resultado1 == 0){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Numero de pontos turísticos da Carta 1: %d \n\n", numPontosTuristicos1);

                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Numero de pontos turísticos da Carta 2: %d \n\n", numPontosTuristicos2);

                printf("VITÓRIA DA CARTA 2\n");
    
            } else {
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Área da Carta 1: %d \n\n", numPontosTuristicos1);

                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Área da Carta 2: %d \n\n", numPontosTuristicos2);

                printf("EMPATE\n");
            }
        break;
        
        case 5:
            printf("Opção Escolhida: Densidade Demográfica.\n");
            resultado1 = densiPop1 < densiPop2 ? 1 : 0;   
            
            if(resultado1 == 1){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Densidade Demogŕafica da Carta 1: %.2f \n\n", densiPop1);

                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Densidade Demogŕafica da Carta 2: %.2f \n\n", densiPop2);

                printf("VITÓRIA DA CARTA 1\n");
    
            } else if(resultado1 == 0){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Densidade Demogŕafica da Carta 1: %.2f \n\n", densiPop1);

                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Densidade Demogŕafica da Carta 2: %.2f \n\n", densiPop2);

                printf("VITÓRIA DA CARTA 2\n");
    
            } else {
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Área da Carta 1: %.2f \n\n", densiPop1);

                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Área da Carta 2: %.2f \n\n", densiPop2);

                printf("EMPATE\n");
            }
        break;

        default:
            printf("opção inválida\n\n");
        break;
    }

   
    // COMPARAÇÃO 2 - MENU DE ESCOLHA

    printf("======================================\n");
    printf("||   SEGUNDA Comparação de Cartas   ||\n");
    printf("||   ESCOLHA UMA OPÇÃO DIFERENTE    ||\n");
    printf("||           DA PRIMEIRA            ||\n");
    printf("======================================\n");
    printf("|| 1. População                     ||\n");
    printf("|| 2. Área                          ||\n");
    printf("|| 3. PIB                           ||\n");
    printf("|| 4. Número de Pontos Turísticos   ||\n");
    printf("|| 5. Densidade Demográfica         ||\n");
    printf("######################################\n");
    printf("||      Digite sua escolha:         ||\n");
    printf("######################################\n");

    // INICIALIZAÇÃO DAS VARIÁVEIS DA COMPARAÇÃO 2

    int opcaoMenu2, resultado2;
    scanf("%d", &opcaoMenu2);
    
    // TESTE PARA GARANTIR QUE A OPÇÃO 2 SEJA DIFERENTE DA OPÇÃO 1
    if(opcaoMenu2 == opcaoMenu1){
        printf("Opção inválida, escolha outra opção\n");
        scanf("%d", &opcaoMenu2);
    } 
    // INICIO DAS COMPARAÇÕES DA OPÇÃO 2.
    switch(opcaoMenu2){

        case 1:
            printf("Opção Escolhida: População.\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            
            if(resultado2 == 1){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("População da Carta 1: %ld \n\n", populacao1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("População da Carta 2: %ld \n\n", populacao2);
                
                printf("VITÓRIA DA CARTA 1\n");
                
            } else if(resultado2 == 0){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("População da Carta 1: %ld \n\n", populacao1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("População da Carta 2: %ld \n\n", populacao2);
                
                printf("VITÓRIA DA CARTA 2\n");
                
            } else {
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("População da Carta 1: %ld \n\n", populacao1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("População da Carta 2: %ld \n\n", populacao2);
                
                printf("EMPATE\n");
            }
        break;
        
        case 2:
            printf("Opção Escolhida: PIB.\n");
            resultado2 = PIB1 > PIB2 ? 1 : 0;
        
            if(resultado2 == 1){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("PIB da Carta 1: %.2f \n\n", PIB1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("PIB da Carta 2: %.2f \n\n", PIB2);
                
                printf("VITÓRIA DA CARTA 1\n");
                
            } else if(resultado2 == 0){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("PIB da Carta 1: %.2f \n\n", PIB1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("PIB da Carta 2: %.2f \n\n", PIB2);
                
                printf("VITÓRIA DA CARTA 2\n");
                
            } else {
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("PIB da Carta 1: %.2f \n\n", PIB1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("PIB da Carta 2: %.2f \n\n", PIB2);
                
                printf("EMPATE\n");
            }
        break;
        
        case 3:
            printf("Opção Escolhida: Área.\n");
            resultado2 = areaCidade1 > areaCidade2 ? 1 : 0;
            
            if(resultado2 == 1){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Área da Carta 1: %.2f \n\n", areaCidade1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Área da Carta 2: %.2f \n\n", areaCidade2);
                
                printf("VITÓRIA DA CARTA 1\n");
                
            } else if(resultado2 == 0){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Área da Carta 1: %.2f \n\n", areaCidade1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Área da Carta 2: %.2f \n\n", areaCidade2);
                
                printf("VITÓRIA DA CARTA 2\n");
                
            } else {
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Área da Carta 1: %.2f \n\n", areaCidade1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Área da Carta 2: %.2f \n\n", areaCidade2);
                
                printf("EMPATE\n");
            }
        break;
        
        case 4:
            printf("Opção Escolhida: Número de Pontos Turísticos.\n");
            resultado2 = numPontosTuristicos1 > numPontosTuristicos2 ? 1 : 0;
            
            if(resultado2 == 1){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Numero de pontos turísticos da Carta 1: %d \n\n", numPontosTuristicos1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Numero de pontos turísticos da Carta 2: %d \n\n", numPontosTuristicos2);
                
                printf("VITÓRIA DA CARTA 1\n");
                
            } else if(resultado2 == 0){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Numero de pontos turísticos da Carta 1: %d \n\n", numPontosTuristicos1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Numero de pontos turísticos da Carta 2: %d \n\n", numPontosTuristicos2);
                
                printf("VITÓRIA DA CARTA 2\n");
                
            } else {
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Área da Carta 1: %d \n\n", numPontosTuristicos1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Área da Carta 2: %d \n\n", numPontosTuristicos2);
                
                printf("EMPATE\n");
            }
        break;
        
        case 5:
            printf("Opção Escolhida: Densidade Demográfica.\n");
            resultado2 = densiPop1 < densiPop2 ? 1 : 0;   
            
            if(resultado2 == 1){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Densidade Demogŕafica da Carta 1: %.2f \n\n", densiPop1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Densidade Demogŕafica da Carta 2: %.2f \n\n", densiPop2);
                
                printf("VITÓRIA DA CARTA 1\n");
                
            } else if(resultado2 == 0){
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Densidade Demogŕafica da Carta 1: %.2f \n\n", densiPop1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Densidade Demogŕafica da Carta 2: %.2f \n\n", densiPop2);
                
                printf("VITÓRIA DA CARTA 2\n");
                
            } else {
                printf("Nome do País: %s\n", nomeDaCidade1);
                printf("Área da Carta 1: %.2f \n\n", densiPop1);
                
                printf("Nome do País: %s\n", nomeDaCidade2);
                printf("Área da Carta 2: %.2f \n\n", densiPop2);
                
                printf("EMPATE\n");
            }
        break;
        
        default:
        printf("opção inválida\n\n");
        break;
        
    }
    


    // SOMATÓRIO DOS ATRIBUTOS PARA DETERMINAR O VENCEDOR DA RODADA.
    printf("======================================\n");
    printf("||     SOMATÓRIO DOS ATRIBUTOS      ||\n");
    printf("||     PARA DETERMINAR O VENCEDOR   ||\n");
    printf("||              DA RODADA           ||\n");
    printf("======================================\n");

    // PEGANDO OS VALORES PARA O SOMATÓRIO DA OPÇÃO DE MENU 1
    float Carta1Menu1, Carta2Menu1;
    
    if (opcaoMenu1 == 1){
        Carta1Menu1 = populacao1;
        Carta2Menu1 = populacao2;
        
    } else if (opcaoMenu1 == 2){
        Carta1Menu1 = areaCidade1;
        Carta2Menu1 = areaCidade2;
        
    } else if(opcaoMenu1 == 3){
        Carta1Menu1 = PIB1;
        Carta2Menu1 = PIB2;
        
    } else if (opcaoMenu1 == 4){
        Carta1Menu1 = numPontosTuristicos1;
        Carta2Menu1 = numPontosTuristicos2;
        
    } else {
        Carta1Menu1 = densiPop1;
        Carta2Menu1 = densiPop2;
    }
    
    float Carta1Menu2, Carta2Menu2;

    // PEGANDO OS VALORES PARA O SOMATÓRIO DA OPÇÃO DE MENU 2
    if (opcaoMenu2 == 1){
        Carta1Menu2 = populacao1;
        Carta2Menu2 = populacao2;

    } else if (opcaoMenu2 == 2){
        Carta1Menu2 = areaCidade1;
        Carta2Menu2 = areaCidade2;

    } else if(opcaoMenu2 == 3){
        Carta1Menu2 = PIB1;
        Carta2Menu2 = PIB2;

    } else if (opcaoMenu2 == 4){
        Carta1Menu2 = numPontosTuristicos1;
        Carta2Menu2 = numPontosTuristicos2;

    } else {
        Carta1Menu2 = densiPop1;
        Carta2Menu2 = densiPop2;
    }

    // printf("CARTA 1 MENU 1 %.2f\n", Carta1Menu1);
    // printf("CARTA 2 MENU 1 %.2f\n", Carta2Menu1);

    // printf("CARTA 1 MENU 2 %.2f\n", Carta1Menu2);
    // printf("CARTA 2 MENU 2 %.2f\n", Carta2Menu2);


    // SOMATÓRIO FINAL
    float somatórioFinalCarta1 = Carta1Menu1 + Carta1Menu2;
    float somatórioFinalCarta2 = Carta2Menu1 + Carta2Menu2;

    // printf("%d \n", somatórioFinalCarta1);
    // printf("%d \n", somatórioFinalCarta2);

    printf("SOMATÓRIO DOS ATRIBUTOS DA CARTA 1 - %s: %.2f \n",nomeDaCidade1, somatórioFinalCarta1);
    printf("SOMATÓRIO DOS ATRIBUTOS DA CARTA 2 - %s: %.2f \n",nomeDaCidade2, somatórioFinalCarta2);

    if(somatórioFinalCarta1 == somatórioFinalCarta2){
        printf("EMPATE !");
    } else if (somatórioFinalCarta1 > somatórioFinalCarta2){
        printf("VITÓRIA DO JOGADOR 1 - CARTA 1 %s\n", nomeDaCidade1);
    } else {
        printf("VITÓRIA DO JOGADOR 2 - CARTA 2 %s\n", nomeDaCidade2);
    }


    return 0;
}

// LINK DO MEU REPOSITÓRIO: https://github.com/anaafreitas/Programando-em-C-Faculdade
