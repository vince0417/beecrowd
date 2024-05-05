//Número Primo
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        int x, aux = 0;
        scanf("%d", &x);
        for (int cont = 2; cont < x; cont++)
        {
            if (x%cont == 0) 
            {
                aux++;
                printf("%d nao eh primo\n", x);
                break;
            }
        }
        if (aux == 0) printf("%d eh primo\n", x);
    }
    
    return 0;
}
