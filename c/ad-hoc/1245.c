//Botas Perdidas
#include <stdio.h>

int main()
{
    int num;

    while (scanf("%d", &num) != EOF)
    {
        int tBota[num];
        char pe[num];
        int cont = 0;

        for (int i = 0; i < num; i++)
        {
            scanf("%d %s", &tBota[i],&pe[i]);
            for (int id = i; id >= 0; id--)
            {
                if (tBota[i] == tBota[id] 
                    && pe[i] != pe[id])
                {
                    cont++;
                    tBota[i] = 0;
                    tBota[id] = 0;
                    pe[i] = 0;
                    pe[id] = 0;
                }
                
            }
        
        }
        printf("%d\n", cont);
    }
    
    return 0;
}
