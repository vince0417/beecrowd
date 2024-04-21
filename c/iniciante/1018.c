//Cédulas
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    printf("%d\n", a);

    int n100, n50, n20, n10, n5, n2, n1;
    n100 = n50 = n20 = n10 = n5 = n2 = n1 = 0;

    while (a >= 100)
    {
        a -= 100;
        n100++;
    }

    while (a >= 50)
    {
        a -= 50;
        n50++;
    }

    while (a >= 20)
    {
        a -= 20;
        n20++;
    }

    while (a >= 10)
    {
        a -= 10;
        n10++;
    }

    while (a >= 5)
    {
        a -= 5;
        n5++;
    }

    while (a >= 2)
    {
        a -= 2;
        n2++;
    }

    while (a >= 1)
    {
        a -= 1;
        n1++;
    }

    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);

    return 0;
}
