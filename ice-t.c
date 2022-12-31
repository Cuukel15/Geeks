#include "cuukel15/lib.h"
#include <stdio.h>

int main() {
    unsigned nbrChilds, nbrIceT;
    PrintString("INPUT <_ "); scanf("%d%d", &nbrChilds, &nbrIceT);
    PrintString("------------------------------------------------------------------------\n");
    if(nbrIceT % nbrChilds == 0)
        PrintString("Donnez-les");
    else
        PrintString("Mangez-les vous-même");
    NextLine();
    return 0;
}
