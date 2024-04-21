//Distância Entre Dois Pontos
#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2;
    float isca;
    double distancia;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    isca = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    distancia = sqrt(isca);
    printf("%.4lf\n", distancia);
    return 0;
}
