//Pares, Ímpares, Positivos e Negativos
#include <stdio.h>

int main() {
    int impar = 0, par = 0, pos = 0, neg = 0;

    for (int i = 0; i < 5; i++)
    {
        int num;
        scanf("%d", &num);

        if (num%2 == 0)
        {
            par += 1;
        }
        else
            impar += 1;

        if (num < 0)
        {
            neg += 1;
        }
        else if (num > 0)
        {
            pos += 1;
        }
            
    }
    
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}
