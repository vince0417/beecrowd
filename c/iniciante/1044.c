//Múltiplos
#include <stdio.h>

int main()
{

    int a, b;

    scanf("%d %d", &a, &b);

    if (a%b == 0 || b%a == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }

    // poderia ser assim tbm:
    // printf("%s Multiplos\n", (a%b == 0 || b%a == 0) ? "Sao" : "Nao sao");

    return 0;
}
