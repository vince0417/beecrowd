//Menor e Posição
#include <stdio.h>

int main () {
    int total, menor, posicao;
    scanf("%i", &total);

    int vetor[total];
    for (int i = 0; i < total; i++) scanf("%i", &vetor[i]);

    menor = vetor[0];

    for (int i = 0; i < total; i++)
    {
        if (menor > vetor[i])
        {
            menor = vetor[i];
            posicao = i;
        }
        
    }
    
    printf("Menor valor: %i\n", menor);
    printf("Posicao: %i\n", posicao);
    return 0;
}
