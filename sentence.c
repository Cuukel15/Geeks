#include "cuukel15/lib.h"

int main() {
    char str[70];
    PrintString("INPUT   <_   ");
    fgets(str, 70, stdin);
    PrintString("------------------------------------------------------------------------\n");
    PrintString("OUTPUT   _>   ");
    PrintString(str);
    return 0;
}
