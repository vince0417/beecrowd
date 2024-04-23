//Colchão
#include <stdio.h>

int main() 
{
    int colchao[3], pH, pL;
    for (int i = 0; i < 3; i++) scanf("%d", &colchao[i]); 
    scanf("%d %d", &pH, &pL);

    if ((colchao[0] <= pL && colchao[1] <= pH) ||
        (colchao[1] <= pL && colchao[0] <= pH) ||
        (colchao[1] <= pL && colchao[2] <= pH) ||
        (colchao[2] <= pL && colchao[1] <= pH) ||
        (colchao[0] <= pL && colchao[2] <= pH) ||
        (colchao[2] <= pL && colchao[0] <= pH)) printf("S\n");
    else printf("N\n");
    
    return 0;
}
