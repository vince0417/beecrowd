//Volta à Faculdade de Física
#include <stdio.h>

int main() {
    int v, t;

    while (scanf("%i %i", &v, &t) != EOF)
    {
        int resultado = v*2*t;
        printf("%d\n", resultado);
    }
    
    return 0;
}
