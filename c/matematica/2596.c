//Xenlonguinho
#include <stdio.h>

int main()
{
    int num;
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
        int esferas = 0, invoca = 0;
        scanf("%d", &esferas);

        for (int id = 1; id <= esferas; id++)
        {
            int cont = 0;
            for (int x = 1; x <= id; x++)
            {
                if (id%x == 0) cont++;
            }
            if (cont%2 == 0) invoca++;
        }
        printf("%i\n", invoca);
    }
    
    return 0;
}
