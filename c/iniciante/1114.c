//Senha Fixa
#include <stdio.h>

int main()
{

    int x, y;
    x = 2002;
    scanf("%i", &y);

    if (y == 2002)
    {
        printf("Acesso Permitido\n");
    }
    else if (y != 2002)
    {
        while (y != 2002)
        {
            printf("Senha Invalida\n");
            scanf("%i", &y);
            if (y == 2002)
            {
                printf("Acesso Permitido\n");
            }
        }
    }

    return 0;
}
