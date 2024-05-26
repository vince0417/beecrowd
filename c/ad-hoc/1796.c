//Economia Brasileira
#include <stdio.h>

int main()
{
    int num, sim = 0, nao = 0;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        int voto;
        scanf("%d", &voto);

        if (voto == 1) nao++;
        else sim++;
    }
    
    if (sim > nao) printf("Y\n");
    else printf("N\n");
    return 0;
}
