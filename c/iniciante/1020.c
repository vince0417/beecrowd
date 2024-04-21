//Idade em Dias
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int ano, mes, dia;

    ano = a / 365;
    a = a % 365;
    mes = a / 30;
    dia = a % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

    return 0;
}
