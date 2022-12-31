#include "lib.h"
#include <stdio.h>

void NextLine() {
    PrintChar('\n');
}

void PrintChar(char c) {
    printf("%c", c);
}

void PrintString(char *str) {
    if(!str)
        PrintString("ERROR: no memory space for this string");
    else
        for(unsigned i = 0; str[i] != '\0'; i++)
            PrintChar(str[i]);
}
