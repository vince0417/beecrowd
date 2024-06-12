//Sequência S II
#include <stdio.h>

int main()
{
    int s = 1, n1 = 3, n2 = 2;
    while (n2 <= 39)
    {
        s += (s+n1)/n2;
        n1 += 2;
        n2 += n2;
    }

    printf("%.2f\n", (float)s);
    return 0;
}
