#include <stdio.h>

// Definição de constantes para facilitar a manutenção do código
#define LINHAS 10        // Número total de linhas do tabuleiro
#define COLUNAS 10       // Número total de colunas do tabuleiro
#define TAM_NAVIO 3      // Tamanho fixo de cada navio (quantidade de posições que ele ocupa)

int main() {
    // Declaração de uma matriz bidimensional para representar o tabuleiro
    // Cada posição do tabuleiro é um número inteiro
    int tabuleiro[LINHAS][COLUNAS];

    // Declaração de dois vetores (arrays unidimensionais) que representam os navios
    // Cada posição do navio será marcada com o número 3
    int navioHorizontal[TAM_NAVIO] = {3, 3, 3};
    int navioVertical[TAM_NAVIO]   = {3, 3, 3};

    // Inicialização do tabuleiro:
    // Percorremos cada linha e cada coluna para definir o valor 0, que representa água.
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;  // 0 significa que a posição está vazia (água)
        }
    }

    // Definindo as coordenadas iniciais para posicionar os navios.
    // Essas coordenadas são definidas diretamente no código.

    // Para o navio horizontal:
    // Ele ficará em uma linha fixa e ocupará colunas consecutivas.
    int linhaHoriz = 2;      // Linha em que o navio horizontal será posicionado (contagem começa em 0)
    int colunaHoriz = 4;     // Coluna inicial para o navio horizontal
                           // Importante: colunaHoriz + TAM_NAVIO - 1 deve ser menor que COLUNAS

    // Para o navio vertical:
    // Ele ficará em uma coluna fixa e ocupará linhas consecutivas.
    int linhaVert = 5;       // Linha inicial para o navio vertical
    int colunaVert = 1;      // Coluna em que o navio vertical será posicionado
                           // Importante: linhaVert + TAM_NAVIO - 1 deve ser menor que LINHAS



    // ----------------Posicionamento do Navio Horizontal no Tabuleiro-------------------


    // Primeiro, verificamos se o navio cabe no tabuleiro
    // A condição garante que o navio, começando na colunaHoriz, não ultrapasse o limite do tabuleiro
    if (colunaHoriz + TAM_NAVIO <= COLUNAS) {
        // Variável para controlar se é possível posicionar o navio sem sobreposição
        int podePosicionar = 1;  // 1 significa "sim", 0 significa "não"

        // Verifica se todas as posições onde o navio será colocado estão livres (ou seja, possuem valor 0)
        for (int i = 0; i < TAM_NAVIO; i++) {
            // Se encontrar qualquer posição que não esteja com 0, significa que já existe algo lá
            if (tabuleiro[linhaHoriz][colunaHoriz + i] != 0) {
                podePosicionar = 0; // Não pode posicionar o navio aqui
                break;            // Encerra o loop, pois já encontramos uma sobreposição
            }
        }

        // Se todas as posições estiverem livres, posiciona o navio no tabuleiro
        if (podePosicionar) {
            for (int i = 0; i < TAM_NAVIO; i++) {
                // Atribui o valor 3 (do vetor navioHorizontal) para cada posição correspondente
                tabuleiro[linhaHoriz][colunaHoriz + i] = navioHorizontal[i];
            }
        } else {
            // Caso haja sobreposição, exibe uma mensagem de erro
            printf("Erro: Navio horizontal se sobrepõe a outro navio.\n");
        }
    } else {
        // Se o navio extrapola os limites do tabuleiro, exibe uma mensagem de erro
        printf("Erro: Navio horizontal extrapola o tabuleiro.\n");
    }


    // -------------Posicionamento do Navio Vertical no Tabuleiro----------


    // Verifica se o navio vertical cabe no tabuleiro (não ultrapassa o número de linhas)
    if (linhaVert + TAM_NAVIO <= LINHAS) {
        // Variável de controle para o posicionamento sem sobreposição
        int podePosicionar = 1;  // Inicialmente, supomos que é possível posicionar

        // Verifica se cada posição onde o navio vertical será colocado está livre
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linhaVert + i][colunaVert] != 0) {
                podePosicionar = 0; // Encontra sobreposição
                break;            // Sai do loop
            }
        }

        // Se todas as posições estiverem livres, posiciona o navio vertical
        if (podePosicionar) {
            for (int i = 0; i < TAM_NAVIO; i++) {
                // Atribui o valor 3 para cada posição onde o navio vertical será colocado
                tabuleiro[linhaVert + i][colunaVert] = navioVertical[i];
            }
        } else {
            // Se ocorrer sobreposição, informa o erro
            printf("Erro: Navio vertical se sobrepõe a outro navio.\n");
        }
    } else {
        // Se o navio extrapola o tamanho do tabuleiro, informa o erro
        printf("Erro: Navio vertical extrapola o tabuleiro.\n");
    }


    // ----------------Exibindo o Tabuleiro no Console-----------------


    // Utiliza dois loops aninhados para percorrer todas as linhas e colunas do tabuleiro
    // Imprime cada valor e separa-os por um espaço para facilitar a visualização
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);  // Imprime o valor (0 para água, 3 para parte de um navio)
        }
        // Após cada linha, pula para a próxima linha no console
        printf("\n");
    }

    return 0;
}

// LINK DO MEU REPOSITÓRIO: https://github.com/anaafreitas/Programando-em-C-Faculdade
