//Notas e Moedas
#include <stdio.h>

int main()
{
    double n;
    scanf("%lf", &n);
    int a = (int)(n * 100);

    int n100, n50, n20, n10, n5, n2;
    int m1, m50, m25, m10, m05;
    n100 = n50 = n20 = n10 = n5 = n2 = m1 = m50 = m25 = m10 = m05 = 0;

    while (a >= 10000)
    {
        a -= 10000;
        n100++;
    }

    while (a >= 5000)
    {
        a -= 5000;
        n50++;
    }

    while (a >= 2000)
    {
        a -= 2000;
        n20++;
    }

    while (a >= 1000)
    {
        a -= 1000;
        n10++;
    }

    while (a >= 500)
    {
        a -= 500;
        n5++;
    }

    while (a >= 200)
    {
        a -= 200;
        n2++;
    }

    while (a >= 100)
    {
        a -= 100;
        m1++;
    }

    while (a >= 50)
    {
        a -= 50;
        m50++;
    }

    while (a >= 25)
    {
        a -= 25;
        m25++;
    }

    while (a >= 10)
    {
        a -= 10;
        m10++;
    }

    while (a >= 5)
    {
        a -= 5;
        m05++;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m05);
    printf("%d moeda(s) de R$ 0.01\n", a);

    return 0;
}
