//Eu Quero Cafééé
#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, n3;
    scanf("%i %i %i", &n1, &n2, &n3);

    int aux = (1000*n2);
    int total = (n1*n3);

    if ((aux/n1) >= n3) printf("%i\n", n2);
    else 
    {
        int aux1 = (int) ceil((double)total / aux);
        int cafeL = (aux1*n2);
        printf("%d\n", cafeL);
    }
    
    return 0;
}
