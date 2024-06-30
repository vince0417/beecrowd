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

    int soma = (n2*n1)+((n2*(n2-1))/2);//Utilizado PA
    printf("%i\n", soma);
    return 0;
}
