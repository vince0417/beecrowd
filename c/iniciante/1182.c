//Torre
#include <stdio.h>

int main()
{
    int num;
    float matriz[12][12], soma = 0;
    char conta;
    scanf("%i %c", &num, &conta);

    int l, c;
    for ( l = 0; l < 12; l++)
    {
        for ( c = 0; c < 12; c++)
        {
            scanf("%f", &matriz[l][c]);
        }
        
    }

    for ( c = 0; c < 12; c++)
    {
        if (c == num)
        {
            for ( l = 0; l < 12; l++)
            {
                soma += matriz[l][c];
            }
            
        }
        
    }

    if (conta == 'S') printf("%.1f\n", soma);
    else if (conta == 'M') printf("%.1f\n", (soma/12));

    return 0;
}
