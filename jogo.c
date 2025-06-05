// Implementa as funções do jogo (jogador e IA)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jogo.h"

// Inicializa o tabuleiro com espaços em branco
void inicializarTabuleiro(char tab[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tab[i][j] = ' ';
}

// Exibe o tabuleiro no terminal
void exibirTabuleiro(char tab[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", tab[i][0], tab[i][1], tab[i][2]);
        if (i < 2) printf("-----------\n");
    }
    printf("\n");
}

// Recebe a jogada do jogador humano e valida a posição
void receberJogada(char tab[3][3], char jogador) {
    int linha, coluna;
    while (1) {
        printf("Jogador %c, digite linha e coluna (0-2): ", jogador);
        scanf("%d %d", &linha, &coluna);
        if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tab[linha][coluna] == ' ') {
            tab[linha][coluna] = jogador;
            break;
        } else {
            printf("Jogada inválida. Tente novamente.\n");
        }
    }
}

// Faz a jogada da IA escolhendo uma posição livre aleatória
void jogadaComputador(char tab[3][3], char computador) {
    int linha, coluna;
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    while (1) {
        linha = rand() % 3;
        coluna = rand() % 3;
        if (tab[linha][coluna] == ' ') {
            printf("Computador jogou na posição %d %d\n", linha, coluna);
            tab[linha][coluna] = computador;
            break;
        }
    }
}

// Verifica se o jogador ou IA venceu o jogo
int verificarVitoria(char tab[3][3], char jogador) {
    for (int i = 0; i < 3; i++) {
        if (tab[i][0] == jogador && tab[i][1] == jogador && tab[i][2] == jogador) return 1;
        if (tab[0][i] == jogador && tab[1][i] == jogador && tab[2][i] == jogador) return 1;
    }
    if (tab[0][0] == jogador && tab[1][1] == jogador && tab[2][2] == jogador) return 1;
    if (tab[0][2] == jogador && tab[1][1] == jogador && tab[2][0] == jogador) return 1;
    return 0;
}
