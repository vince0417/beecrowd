//Tabuada
#include <stdio.h>

int main()
{

    int x, y;
    scanf("%i", &x);

    for (int i = 1; i <= 10; i++)
    {
        y = i * x;
        printf("%i x %i = %i\n", i, x, y);
    }

    return 0;
}
