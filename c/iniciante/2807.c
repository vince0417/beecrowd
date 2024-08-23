//Iccanobif
#include <stdio.h>

int main ()
{
    int num;
    scanf("%i", &num);

    int vetor[40] = {1,1};
    for (int i = 1; i < num-1; i++)
    {
        vetor[i+1] = (vetor[i-1]+vetor[i]);
    }

    for (int i = num-1; i >= 0; i--)
    {
        if (i > 0) printf("%i ", vetor[i]);
        else printf("%i\n", vetor[i]);
    }
    
    return 0;
}