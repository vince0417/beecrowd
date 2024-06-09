//Fatorial Simples
#include <stdio.h>

int main()
{
    int num, resultado = 0;

    scanf("%i", &num);
    resultado = num;
    for (int i = num-1; i > 0 ; i--)
    {
        resultado = resultado*i;
    }
    
    printf("%i\n", resultado);
    return 0;
}
