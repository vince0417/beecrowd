//Gasto de Combustível
#include <stdio.h>

int main()
{
    float tempo, velocidade;
    float distancia;
    double combustivel;
    scanf("%f", &tempo);
    scanf("%f", &velocidade);
    distancia = tempo * velocidade;
    combustivel = distancia / 12;
    printf("%.3lf\n", combustivel);
    return 0;
}
