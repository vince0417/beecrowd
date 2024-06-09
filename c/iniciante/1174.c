//Seleçao em Vetor I
#include <stdio.h>

int main () {
    double x; 
    float a[100];

    for (int i = 0; i < 100; i++)
    {
        scanf("%lf", &x);

        if (x <= 10) printf("A[%i] = %.1lf\n", i, x);
        else
            continue;                
    }
    
    return 0;
}
