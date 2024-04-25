//Feijão
#include <stdio.h>

int main()
{
    int copos[4];
    for (int i = 0; i < 4; i++) scanf("%d", &copos[i]);
    for (int i = 0; i < 4; i++)
    {
        if (copos[i] != 0)
        {
            printf("%d\n", i+1);
            break;
        }
    }
    
    return 0;
}
