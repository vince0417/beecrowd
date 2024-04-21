//Tipo de Combustível
#include <stdio.h>

int main()
{

    int x, n1, n2, n3;
    x = 0;
    n1 = 0;
    n2 = 0;
    n3 = 0;
    while (x != 4)
    {
        scanf("%i", &x);

        if (x == 1)
        {
            n1 = n1 + 1;
        }
        else if (x == 2)
        {
            n2 = n2 + 1;
        }
        else if (x == 3)
        {
            n3 = n3 + 1;
        }
    }

    printf("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i\n", n1, n2, n3);

    return 0;
}
