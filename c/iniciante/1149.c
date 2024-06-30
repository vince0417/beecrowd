//Somando Inteiros Consecutivos
#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%i %i", &n1, &n2);

    if (n1 <= 0 || n2 <= 0)
    {
        if (n1 <= 0) while (n1 <= 0) scanf("%i", &n1);
        if (n2 <= 0) while (n2 <= 0) scanf("%i", &n2);
    }

    int soma = 0;
    for (int i = 0; i < n2; i++)
    {
        soma += (n1+i);
    }
    
    printf("%i\n", soma);
    return 0;
}
