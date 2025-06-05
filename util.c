#include <stdio.h>
#include <stdlib.h>
#include "util.h"

void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
