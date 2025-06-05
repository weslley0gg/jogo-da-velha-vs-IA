#ifndef JOGO_H
#define JOGO_H

void inicializarTabuleiro(char tab[3][3]);
void exibirTabuleiro(char tab[3][3]);
void receberJogada(char tab[3][3], char jogador);
void jogadaComputador(char tab[3][3], char computador);
int verificarVitoria(char tab[3][3], char jogador);

#endif
