//Par ou Ímpar
#include <stdio.h>

int main()
{

    int n, x;
    int sinal;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (x == 0)
        {
            printf("NULL\n");
            continue;
        }

        if (x < 0)
        {
            sinal = 0;
            x *= -1;
        }
        else
        {
            sinal = 1;
        }

        if (x % 2 == 0)
        {
            if (sinal == 0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("EVEN POSITIVE\n");
            }
        }
        else
        {
            if (sinal == 0)
            {
                printf("ODD NEGATIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
    }

    return 0;
}
