//A Corrida de Lesmas
#include <stdio.h>

int main() {
    int num;

    while (scanf("%i", &num) != EOF)
    {
        int vetor[num];
        for (int i = 0; i < num; i++)
        {
            scanf("%i", &vetor[i]);
        }
        int maior = vetor[0];
        for (int i = 1; i < num; i++)
        {
            if (vetor[i] > maior) maior = vetor[i];
        }
        if (maior < 10) printf("1\n");
        else if (maior >= 10 && maior < 20) printf("2\n");
        else printf("3\n");
              
    }
    
    return 0;
}
