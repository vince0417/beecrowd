//Soma de Ímpares Consecutivos III
#include <stdio.h>
#include <stdlib.h>

int main() {
    long num;
    scanf("%ld", &num);

    for (int i = 0; i < num; i++)
    {
        long x, y;
        scanf("%ld%ld", &x, &y);

        long cont = 0, soma = 0;
        while (cont < y)
        {
            if (abs(x)%2 == 1)
            {
                cont++;
                soma += x;
            }
            x++;
        }
        printf("%ld\n", soma);
    }

    return 0;
}
