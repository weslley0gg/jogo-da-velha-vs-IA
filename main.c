#include <stdio.h>
#include <stdlib.h>
#include "jogo.h"
#include "util.h"

int main() {
    char tabuleiro[3][3];
    char jogador = 'X';  // Jogador humano
    char computador = 'O';  // IA
    int jogadas = 0;

    inicializarTabuleiro(tabuleiro);

    while (1) {
        exibirTabuleiro(tabuleiro);
        receberJogada(tabuleiro, jogador);
        jogadas++;

        if (verificarVitoria(tabuleiro, jogador)) {
            exibirTabuleiro(tabuleiro);
            printf("Você venceu!\n");
            break;
        }

        if (jogadas == 9) {
            exibirTabuleiro(tabuleiro);
            printf("Empate!\n");
            break;
        }

        jogadas++;
        jogadaComputador(tabuleiro, computador);

        if (verificarVitoria(tabuleiro, computador)) {
            exibirTabuleiro(tabuleiro);
            printf("Computador venceu!\n");
            break;
        }

        if (jogadas == 9) {
            exibirTabuleiro(tabuleiro);
            printf("Empate!\n");
            break;
        }
    }

    return 0;
}
