//Quanta Mandioca?
#include <stdio.h>

int main()
{
    int grama[] = {300,1500,600,1000,150};
    int porcao[5];

    int soma = 225;
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &porcao[i]);
        soma += (porcao[i]*grama[i]);
    }

    printf("%d\n", soma);
    return 0;
}
