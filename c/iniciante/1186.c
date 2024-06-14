//Abaixo da Diagonal Secundária
#include <stdio.h>

int main()
{
    float matriz[12][12], soma = 0;
    char op;
    scanf("%c", &op);

    for (int l = 0; l < 12; l++)
    {
        for (int c = 0; c < 12; c++)
        {
            scanf("%f", &matriz[l][c]);
            if (l+c > (12-1))
            {
                soma += matriz[l][c];
            }
            
        }
        
    }
    
    if (op == 'S') printf("%.1f\n", soma);
    else printf("%.1f\n", soma/(((12*12)-12)/2));
    
    return 0;
}
