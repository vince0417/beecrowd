//Pares entre Cinco Números
#include <stdio.h>

int main()
{
    int n[5], x;

    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &n[i]);
        if (n[i] % 2 == 0)
        {
            x = x + 1;
        }
    }

    printf("%i valores pares\n", x);
    return 0;
}
