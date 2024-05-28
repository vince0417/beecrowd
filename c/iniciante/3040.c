//A Árvore de Natal
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        int altura, tronco, galhos;
        scanf("%d%d%d", &altura,&tronco,&galhos);

        if (altura >= 200 && altura <= 300 &&
        tronco >= 50 && galhos >= 150)
        {
            printf("Sim\n");
        }
        else printf("Nao\n");
    }
    
    return 0;
}
