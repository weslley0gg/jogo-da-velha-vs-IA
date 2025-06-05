// Arquivo principal - controla o fluxo do jogo
#include <stdio.h>
#include <stdlib.h>
#include "jogo.h"
#include "util.h"

int main() {
    char tabuleiro[3][3];      // Matriz que representa o tabuleiro do jogo
    char jogador = 'X';        // Símbolo do jogador humano
    char computador = 'O';     // Símbolo da IA (computador)
    int jogadas = 0;           // Contador de jogadas realizadas

    inicializarTabuleiro(tabuleiro); // Preenche o tabuleiro com espaços em branco

    while (1) {
        exibirTabuleiro(tabuleiro);         // Mostra o tabuleiro atualizado
        receberJogada(tabuleiro, jogador);  // Jogador humano faz uma jogada
        jogadas++;

        if (verificarVitoria(tabuleiro, jogador)) { // Verifica se o jogador venceu
            exibirTabuleiro(tabuleiro);
            printf("Você venceu!\n");
            break;
        }

        if (jogadas == 9) { // Se o tabuleiro estiver cheio, é empate
            exibirTabuleiro(tabuleiro);
            printf("Empate!\n");
            break;
        }

        jogadas++;
        jogadaComputador(tabuleiro, computador); // IA realiza uma jogada

        if (verificarVitoria(tabuleiro, computador)) { // Verifica se a IA venceu
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
