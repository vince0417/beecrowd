//Quadrado de Pares
#include <stdio.h>

int main () {
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (i%2 == 0)
        {
            int resultado = i*i;
            printf("%d^2 = %d\n", i, resultado);
        }
        
    }
    
    return 0;
}
