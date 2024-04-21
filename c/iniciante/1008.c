//Salário
#include <stdio.h>

int main()
{
    int numero, hora;
    float valor, salario;
    scanf("%d %d %f", &numero, &hora, &valor);
    salario = hora * valor;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, salario);
    return 0;
}
