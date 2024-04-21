//Conversão de Tempo
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int h60, m60;
    h60 = a / 3600;
    a = a % 3600;
    m60 = a / 60;
    a = a % 60;

    printf("%d:%d:%d\n", h60, m60, a);

    return 0;
}
