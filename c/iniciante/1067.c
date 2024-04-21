//Números Ímpares
#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
