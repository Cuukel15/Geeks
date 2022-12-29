#include "cuukel15/lib.h"
#include <stdlib.h>
#include <string.h>

int main() {
    char *hy = (char*) malloc((strlen("Hello World !") + 1) * sizeof(char));
    strcpy(hy, "Hello World !");
    for(short i = 0; hy[i] != '\0'; i++)
        PrintChar(hy[i]);
    NextLine();
}
