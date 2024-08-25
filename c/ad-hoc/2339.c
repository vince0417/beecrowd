//Aviões de Papel
#include <stdio.h>

int main ()
{
    int alunos = 0, papel = 0, quant = 0;
    scanf("%i %i %i", &alunos, &papel, &quant);

    if ((papel/alunos) >= quant) printf("S\n");
    else printf("N\n");

    return 0;
}
