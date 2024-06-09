//Troca em Vetor I
#include <stdio.h>

int main() {
    int vetor[20];

    for (int i = 0; i < 20; i++) scanf("%i", &vetor[i]);

    for (int i = 0; i < 20; i++) printf("N[%i] = %d\n", i, vetor[19-i]);

    return 0;
}
