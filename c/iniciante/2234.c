//Cachorros-Quentes
#include <stdio.h>

int main() {
    int cachorros_quentes, competidores;
    scanf("%d %d", &cachorros_quentes, &competidores);

    float consumidos = (float)cachorros_quentes/(float)competidores;
    printf("%.2f\n", consumidos);
    return 0;
}
