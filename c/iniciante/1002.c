//Área do Círculo
#include <stdio.h>

int main()
{
    double const pi = 3.14159;
    double raio, area;
    scanf("%lf", &raio);
    area = pi * raio * raio;
    printf("A=%.4lf\n", area);
    return 0;
}
