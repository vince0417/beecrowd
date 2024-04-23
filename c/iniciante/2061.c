//As Abas de Péricles
#include <stdio.h>
#include <string.h>

int main()
{
    int abertas, acao;
    scanf("%d %d", &abertas, &acao);

    char seq[20];
    for (int i = 0; i < acao; i++)
    {
        scanf("%s", seq);
        if (strcmp(seq, "fechou") == 0) abertas += 1;
        else if (strcmp(seq, "clicou") == 0) abertas -= 1;
        
    }

    printf("%d\n", abertas);
    return 0;
}
