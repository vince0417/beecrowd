//Competição de Códigos
#include <stdio.h>

int main()
{
    int num, soma = 0, cont = 0;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        int x;
        scanf("%d", &x);

        soma += x;
        if (x%3 != 0) cont += (x%3);
    }
    
    printf("%d\n", (soma-cont));
    return 0;
}
