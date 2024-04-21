//Salário com Bônus
#include <stdio.h>

int main()
{
    char nome[50];
    double salario, vendas, total;
    scanf("%s %lf %lf", nome, &salario, &vendas);
    total = salario + 15 * vendas / 100;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
