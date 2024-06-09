//Idades
#include <stdio.h>

int main ()
{ 
    int n1, cont = 0;
    float aux = 0;

    while (scanf("%i", &n1))
    {
        if (n1 < 0) break;

        aux += (float)n1;
        cont++;
    }

    printf("%.2f\n", (aux/cont));
    return 0;
}
