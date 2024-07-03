//Cimba
#include <stdio.h>
#include <math.h>

int main()
{
    int l1, l2, l3;
    scanf("%i %i %i", &l1, &l2, &l3);

    double semiP = (l1+l2+l3)/2.0;
    double aux = semiP*(semiP-l1)*(semiP-l2)*(semiP-l3);
    double area = sqrt(aux);

    printf("%.3lf m2\n", area);
    return 0;
}

//O algoritmo calcula a área de um triângulo qualquer. 