//Resto da Divisão
#include <stdio.h>

int main () {
    int x, y;
    scanf("%d%d", &x, &y);

    if (x < y)
    {
        for (int i = (x+1); i < y; i++)
        {
            if (i%5 == 2 || i%5 == 3) printf("%i\n", i);
        }
        
    }
    else
    {
        for (int i = (y+1); i < x; i++)
        {
            if (i%5 == 2 || i%5 == 3) printf("%i\n", i);
        }
    }
    
    return 0;
}
