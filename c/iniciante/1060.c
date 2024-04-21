//Números Positivos
#include <stdio.h>

int main()
{
    float n[6];
    int x;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &n[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if (n[i] > 0)
        {
            x = x + 1;
        }
    }
    printf("%d valores positivos\n", x);

    return 0;
}
