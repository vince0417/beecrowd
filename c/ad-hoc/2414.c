//Desafio do Maior Número
#include <stdio.h>

int main()
{
    int num, maior = 0;
    
    while (scanf("%d", &num))
    {
        if (num == 0)
        {
            break;
        }
        else if (num > maior)
        {
            maior = num;
        }
        
    }
    
    printf("%d\n", maior);
    return 0;
}
