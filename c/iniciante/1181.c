//Linha na Matriz
#include <stdio.h>

int main()
{
    int num, l, c;
    float matriz[12][12], soma = 0;
    char op;
    scanf("%d %c", &num, &op);

    for ( l = 0; l < 12; l++)
    {
        for ( c = 0; c < 12; c++)
        {
            scanf("%f", &matriz[l][c]);
            if (l == num) soma += matriz[l][c];
        }
        
    }

    if (op == 'S') printf("%.1f\n", soma);
    else printf("%.1f\n", (soma/12.0));
 
    return 0;
}
