//Fórmula de Bhaskara
#include <stdio.h>
#include <math.h>

int main() {
    double n1, n2, n3;
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    double r1, r2, delta;
    if (n1 != 0){
        delta = pow(n2,2) - (4*n1*n3);
        
        if (delta <= 0){
            printf("Impossivel calcular\n");
        }
        else{
            r1 = (-n2+sqrt(delta))/(2*n1);
            r2 = (-n2-sqrt(delta))/(2*n1);
            printf("R1 = %.5lf\n", r1);
            printf("R2 = %.5lf\n", r2);
        }
    }
    else{
        printf("Impossivel calcular\n");
    }
    
    return 0;
}
