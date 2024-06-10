//Conta
#include <stdio.h>

int main()
{
    int num;
    scanf("%i", &num);

    int vetor[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < num; i++)   
    { 
        if (vetor[i]%2 == 1) printf("1\n");
        else printf("0\n");       
    }
    
    return 0;
}
