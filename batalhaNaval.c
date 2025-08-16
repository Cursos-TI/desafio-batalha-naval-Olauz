#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

int main() {
    /* code */

    // Nível Novato - Posicionamento dos Navios

    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Linha com letras para coordenadas
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.

    // Posiciona navio horizontal em linha 3 (índice 2), colunas D–F (índices 3–5)
    int linha_horizontal = 2;
    int coluna_horizontal = 3;

    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = NAVIO;
    }

    // Posiciona navio vertical em coluna H (índice 7), linhas 6–8 (índices 5–7)
    int linha_vertical = 5;
    int coluna_vertical = 7;

    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = NAVIO;
    }
    
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    // Exibe coordenadas dos navios
    printf("Coordenadas do navio horizontal:\n");
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("%c%d\n", linha[linha_horizontal], coluna_horizontal + i + 1);
    }

    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("%c%d\n", linha[linha_vertical + i], coluna_vertical + 1);
    }

    // Exibe o tabuleiro no formato solicitado
    printf("\nTabuleiro:\n");

    // Imprime cabeçalho com letras, deslocado uma casa à direita
    printf("   ");
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("%c ", linha[j]);
    }
    printf("\n");

    // Imprime linhas numeradas de 1 a 9 com conteúdo
    for (int i = 0; i < TAMANHO_TABULEIRO - 1; i++) {
        printf("%d  ", i + 1);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
