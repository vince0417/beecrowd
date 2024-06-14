//Área Inferior
#include <stdio.h>

int main()
{
    double matriz[12][12], soma = 0.0;
    char op;
    scanf("%c", &op);

    for (int l = 0; l < 12; l++)
    {
        for (int c = 0; c < 12; c++)
        {
            scanf("%lf", &matriz[l][c]);
            if (l > c && l+c > (12-1))
            {
                soma += matriz[l][c];
            }
            
        }
        
    }

    if (op == 'S') printf("%.1lf\n", soma);
    else printf("%.1lf\n", soma/(((12*12)-24)/4));

    return 0;
}
