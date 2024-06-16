//Fazendo Pandorgas
#include <stdio.h>

int main()
{
    int num;
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
        int n1, n2, resultado = 0;
        scanf("%i %i", &n1, &n2);

        resultado += (n1*n2)/2;

        printf("%i cm2\n", resultado);
    }
    
    return 0;
}
