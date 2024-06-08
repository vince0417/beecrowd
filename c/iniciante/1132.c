//Múltiplos de 13
#include <stdio.h>

int main () {
    int n1, n2, soma = 0;

    scanf("%d%d", &n1, &n2);
    if (n1 < n2)
    {
        for (int i = n1; i <= n2; i++)
        {
            if (i%13 != 0)
            {
                soma = soma + i;
            }
        }
    }
    else
        for (int i = n2; i != n1; i++)
        {
            if (i%13 != 0)
            {
                soma = soma + i;
            }
        }

    printf("%d\n", soma);
    return 0;
    
}
