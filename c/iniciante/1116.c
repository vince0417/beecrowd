//Dividindo X por Y
#include <stdio.h>

int main () {
    int num, x, y;
    float resultado = 0;
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%i%i", &x, &y);

        if (y == 0) printf("divisao impossivel\n");
        else{

            resultado = (float)x / y;

            printf("%.1f\n", resultado);
        }

    }
    
    return 0;
}
