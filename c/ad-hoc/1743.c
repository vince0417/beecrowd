//Máquina de Verificação Automatizada
#include <stdio.h>

int main() {
    int conector1[5], conector2[5];

    for (size_t i = 0; i < 5; ++i) {
        scanf("%i", &conector1[i]);
    }
    int cont = 0;
    for (size_t i = 0; i < 5; ++i) {
        scanf("%i", &conector2[i]);
        if (conector1[i] != conector2[i]) ++cont;
    }
    if (cont == 5) printf("Y\n");
    else printf("N\n");
    return 0;
}
