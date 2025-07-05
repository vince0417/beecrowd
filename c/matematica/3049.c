//Nota Cortada
#include <stdio.h>

int main()
{
    int inicioCorte = 0, fimCorte = 0;
    scanf("%i %i", &inicioCorte, &fimCorte);

    if ((inicioCorte+fimCorte) < 160) printf("2\n");
    else if ((inicioCorte+fimCorte) > 160) printf("1\n");
    else printf("0\n");
    
    return 0;
}
