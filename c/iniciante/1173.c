//Preenchimento de Vetor I
#include <stdio.h>

int main () {
    int resultado = 0, num, n[10];

    scanf("%i", &num);
    resultado = num;
    for (int i = 0; i < 10; i++)
    {
        printf("N[%i] = %i\n", i, resultado);

        resultado += resultado;
    }
    
    return 0;
}
