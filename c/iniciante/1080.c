//Maior e Posição
#include <stdio.h>

int main() {
    int vetor[100], maior = 0, posicao;

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 100; i++)
    {
        if (maior < vetor[i])
        {
            maior = vetor[i];
            posicao = i+1;
        }
           
    }
    
    printf("%d\n%d\n", maior, posicao);
    return 0;
}
