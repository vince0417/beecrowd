//Validação de Nota
#include <stdio.h>

int main()
{

    float x, y, z;
    scanf("%f %f", &x, &y);

    if (x < 0 || x > 10)
    {
        while (x < 0 || x > 10)
        {
            printf("nota invalida\n");
            scanf("%f", &x);
        }

        if (x && y >= 0 && x && y <= 10)
        {
            z = (x + y) / 2;
            printf("media = %.2f\n", z);
        }
    }
    else if (y < 0 || y > 10)
    {
        while (y < 0 || y > 10)
        {
            printf("nota invalida\n");
            scanf("%f", &y);
        }

        if (x && y >= 0 && x && y <= 10)
        {
            z = (x + y) / 2;
            printf("media = %.2f\n", z);
        }
    }

    return 0;
}
