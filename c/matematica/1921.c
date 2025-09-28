//Guilherme e Suas Pipas
#include <stdio.h>

int main() {
    long lados;
    scanf("%ld", &lados);
    long long barbantes = ((double)lados/2)*(lados-3);
    printf("%lld\n", barbantes);
    return 0;
}
