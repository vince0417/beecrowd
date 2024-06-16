//Competição de Códigos
#include <stdio.h>

int main()
{
    int num, soma = 0, cont = 0;
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
        int x;
        scanf("%i", &x);

        soma += x;
        if (x%3 != 0) cont += (x%3);
    }
    
    printf("%i\n", (soma-cont));
    return 0;
}
