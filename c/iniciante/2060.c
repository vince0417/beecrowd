//Desafio de Bino
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int two = 0, three  = 0, four = 0, five = 0;
    for (int i = 0; i < num; i++)
    {
        int x;
        scanf("%d", &x);
        if (x%2 == 0) two++;
        if (x%3 == 0) three++;
        if (x%4 == 0) four++;
        if (x%5 == 0) five++;
    }
    
    printf("%d Multiplo(s) de 2\n", two);
    printf("%d Multiplo(s) de 3\n", three);
    printf("%d Multiplo(s) de 4\n", four);
    printf("%d Multiplo(s) de 5\n", five);
    return 0;
}
