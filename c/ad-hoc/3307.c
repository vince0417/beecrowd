//Decora o Rolê!
#include <stdio.h>
#include <math.h>

int main(){
    int casosT = 0;
    scanf("%i", &casosT);

    for (int i = 0; i < casosT; i++)
    {
        int esfera = 0;
        scanf("%i", &esfera);

        double raio = sqrt(esfera/3.14)/2;
        if (raio < 12.0) printf("vermelho = R$ %.2f\n", (esfera*0.09));
        else if (raio >= 12.0 && raio <= 15.0) printf("azul = R$ %.2f\n", (esfera*0.07));
        else printf("amarelo = R$ %.2f\n", (esfera*0.05));
    }
    
    return 0;
}
