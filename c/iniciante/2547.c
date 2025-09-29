//Montanha-Russa
#include <stdio.h>

int main() {
    int pessoas, alturaMin, alturaMax;
    while (scanf("%d%d%d", &pessoas, &alturaMin, &alturaMax) != EOF)
    {
        int pessoa = 0, autorizados = 0;
        for (size_t i  = 0; i < pessoas; i++)
        {
            scanf("%i", &pessoa);
            if (pessoa >= alturaMin && pessoa <= alturaMax) ++autorizados;
        }
        printf("%d\n", autorizados);
    }
    return 0;
}
