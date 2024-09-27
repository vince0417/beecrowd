//Xadrez
#include <stdio.h>

int main()
{
    int linhas, colunas;
    scanf("%i %i", &linhas, &colunas);

    linhas = linhas%2;
    colunas = colunas%2;

    if (linhas == 0 && colunas == 1) printf("0\n");
    else if (linhas == 1 && colunas == 1) printf("1\n");
    else if (linhas == 0 && colunas == 0) printf("1\n");
    else printf("0\n");

    return 0;
}
