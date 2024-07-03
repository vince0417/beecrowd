//Handebol
#include <stdio.h>

int main()
{
    int players, games;
    scanf("%i %i", &players, &games);

    int total = 0, aux = 0;
    for (int i = 0; i < players; i++)
    {
        for (int x = 0; x < games; x++)
        {
            int player  = 0;
            scanf("%i", &player);
            if (player > 0) aux++;
        }
        
        if (aux == games) total++;
        aux = 0;
    }
    
    printf("%i\n", total);
    return 0;
}
