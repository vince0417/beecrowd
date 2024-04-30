//Palavrão
#include <stdio.h>


int main()
{
    char palavra[21] = {};
    scanf("%s", palavra);

    int cont = 0;
    for (int i = 0; i < 21; i++) if (palavra[i]!=0) cont++;

    if (cont >= 10) printf("palavrao\n");
    else printf("palavrinha\n");
    return 0;
}
