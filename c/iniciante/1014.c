//Consumo
#include <stdio.h>

int main()
{
    int a;
    float b;
    double consumo;
    scanf("%d %f", &a, &b);
    consumo = a / b;
    printf("%.3lf km/l\n", consumo);
    return 0;
}
