//Corrida
#include <stdio.h>

int main()
{
    int distancia = 0, eu = 0, amigo = 0;

    while (scanf("%d%d%d", &distancia, &eu, &amigo) != EOF)
    {
        if (eu <= amigo) printf("impossivel\n");
        else{
            double tempo = (double)distancia/(eu-amigo);
            printf("%.2f\n", tempo);
        }
    }
    return 0;
}
