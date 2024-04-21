//Sort Simples
#include <stdio.h>

int main() {
    int num, vetor1[3], vetor2[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num);
        vetor1[i] = num;
        vetor2[i] = num;

    }
    
    int aux;
    for (int x = 0; x < 3; x++)
    {
        for (int y = x; y < 3; y++)
        {
            if (vetor1[x] > vetor1[y])
            {
                aux = vetor1[x];
                vetor1[x] = vetor1[y];
                vetor1[y] = aux;
            }
            
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", vetor1[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", vetor2[i]);
    }
    
    return 0;
}
