// Funções utilitárias
#include <stdio.h>
#include <stdlib.h>
#include "util.h"

// Limpa a tela do terminal
void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
