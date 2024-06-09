//Substituição em Vetor I
#include <stdio.h>

int main () {
    int num, x[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &num);

        if (num < 1) printf("X[%i] = 1\n", i);
        else printf("X[%i] = %i\n", i, num);
    }
    
    return 0;
}
