//Médias Ponderadas
#include <stdio.h>

int main () {
    int num;
    float n1, n2, n3, resultado = 0;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%f%f%f", &n1, &n2, &n3);

        resultado = (n1*2+n2*3+n3*5)/10;
        printf("%.1f\n", resultado);                       
    }
    
    return 0;
}
