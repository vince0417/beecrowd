//Falha do Motor
#include <stdio.h>

int main() {
    int medidas; //Total de medidas/
    scanf("%d", &medidas);
    int medida = 0, anterior = 0, local = 0; //Cada medida e medida anterior;
    for (size_t i = 1; i <= medidas; i++)
    {
        scanf("%i", &medida);
        if (i > 1) {
            if (medida < anterior && local == 0) {
                printf("%i\n", i);
                ++local;
            }
        }
        anterior = medida;
    }
    if (local == 0) printf("0\n");
    return 0;
}
