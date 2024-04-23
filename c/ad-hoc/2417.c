//Campeonato
#include <stdio.h>

int main()
{
    int vetor[6];
    int s1 = 0, s2 = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &vetor[i]);
    }
    s1 += (vetor[0]*3)+vetor[1];
    s2 += (vetor[3]*3)+vetor[4];
    if (s1 > s2)
    {
        printf("C\n");
    }
    else if (s1 < s2)
    {
        printf("F\n");
    }
    else
    {
        if (vetor[2] > vetor[5])
        {
            printf("C\n");
        }
        else if (vetor[2] < vetor[5])
        {
            printf("F\n");
        }
        else
            printf("=\n");
           
    }
        
    return 0;
}
