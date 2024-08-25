//Quermesse
#include <stdio.h>

int main ()
{
    int num = 0, cont = 1;

    while (scanf("%i", &num))
    {
        if (num == 0) return 0;

        for (int i = 0; i < num; i++)
        {
            int aux;
            scanf("%d", &aux);
            if ((i+1) == aux) 
            {
                printf("Teste %i\n", cont);
                printf("%d\n", (i+1));
                printf("\n");
                cont++;
            }
            
        }
        
    }
    
}
