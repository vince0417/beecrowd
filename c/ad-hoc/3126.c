//Lista de Treinamento
#include <stdio.h>

int main()
{
    int candidatos, cont = 0;
    scanf("%d", &candidatos);

    for (int i = 0; i < candidatos; i++)
    {
        int n;
        scanf("%d", &n);

        if (n == 1) cont++;
    }

    printf("%d\n", cont);
    return 0;
}
