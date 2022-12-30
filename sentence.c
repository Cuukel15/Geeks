#include "cuukel15/lib.h"

int main() {
    char str[70],
         in[14] = "INPUT   <_   ",
         out[15] = "OUTPUT   _>   ",
         sep[45] = "--------------------------------------------";
    for(unsigned i = 0; in[i] != '\0'; i++)
        PrintChar(in[i]);
    fgets(str, 70, stdin);
    for(unsigned i = 0; sep[i] != '\0'; i++)
        PrintChar(sep[i]);
    NextLine();
    for(unsigned i = 0; out[i] != '\0'; i++)
        PrintChar(out[i]);
    for(unsigned i = 0; str[i] != '\0'; i++)
        PrintChar(str[i]);
    return 0;
}
