//Cálculo Simples
#include <stdio.h>

int main()
{
    int codigo1, numero1, codigo2, numero2;
    float valor1, valor2, pagar;
    scanf("%d %d %f\n", &codigo1, &numero1, &valor1);
    scanf("%d %d %f", &codigo2, &numero2, &valor2);
    pagar = (numero1 * valor1) + (numero2 * valor2);
    printf("VALOR A PAGAR: R$ %.2f\n", pagar);
    return 0;
}
