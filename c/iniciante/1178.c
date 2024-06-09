//Preenchimento de Vetor III
#include <stdio.h>

int main () {
    int n[100];
    double x;
    scanf("%lf", &x);

    for (int i = 0; i < 100; i++)
    {
        printf("N[%i] = %.4lf\n", i, x);
        x = x/2;
    }
    
    return 0;
}
