//PUM
#include <stdio.h>

int main ()
{
    int num;
    int a = 1, b = 2, c = 3;
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%i %i %i PUM\n", a, b, c);
        a += 4;
        b += 4;
        c += 4;
    }
    
    return 0;
}
