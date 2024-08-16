//O Filme
#include <stdio.h>

int main()
{
    float valor1, valor2;
    scanf("%f %f", &valor1, &valor2);

    float aumento = ((valor2-valor1)/valor1)*100.00;
    printf("%.2f%\n", aumento);
    return 0;
}
