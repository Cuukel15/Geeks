#include "lib.h"

void NextLine() {
    printf("\n");
}

void PrintChar(char c) {
    printf("%c", c);
}

void PrintString(char str[]) {
    for(unsigned i = 0; str[i] != '\0'; i++)
        PrintChar(str[i]);
}
