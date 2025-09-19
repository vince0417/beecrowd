//Reservatório de Mel
#include <stdio.h>

void cilindro(double volume, double diametro) {
    double area = 3.14*(diametro*diametro);
    double altura = (volume/area);
    printf("ALTURA = %.2lf\n", altura);
    printf("AREA = %.2lf\n", area);
}

int main() {
    double volume = 0, diametro = 0; //De um cilindro;
    while (scanf("%lf%lf", &volume, &diametro) != EOF)
    {
        diametro = (diametro/2);
        cilindro(volume,diametro);
    }
    return 0;
}
