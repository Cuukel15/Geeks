#include "cuukel15/lib.h"

int main() {
    char hy[14] = "Hello World !";
    for(short i = 0; hy[i] != '\0'; i++)
        PrintChar(hy[i]);
    NextLine();
}
