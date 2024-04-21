//Quadrado e ao Cubo
#include <stdio.h>

int main()
{

    int x;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        int a, b;
        a = i * i;
        b = i * a;
        printf("%i %i %i\n", i, a, b);
    }

    return 0;
}
