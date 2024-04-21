//Triângulo
#include <stdio.h>

int main() {
    float n1, n2, n3, resultado = 0;

    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1)
    {
        resultado += n1+n2+n3;
        printf("Perimetro = %.1f\n", resultado);
    }
    else{
        resultado += (n1+n2)*n3/2;
        printf("Area = %.1f\n", resultado);
    }
    
    return 0;
}
