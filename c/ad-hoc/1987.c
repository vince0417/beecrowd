//Divisibilidade Por 3
#include <stdio.h>
#include <string.h>

int main()
{
    int quantN = 0;
    while (scanf("%d", &quantN) != EOF)
    {
        char num[10];
        scanf("%s", num);

        int soma = 0;
        for (int i  = 0; i < quantN; i++) soma += num[i] - '0';
      
        if (soma%3 == 0) printf("%d sim\n", soma);
        else printf("%d nao\n", soma);
    }
    return 0;    
}
