//Envelopes
#include <stdio.h>

int main()
{
    int casosT = 0;
    scanf("%i", &casosT);

    for (int i = 0; i < casosT; i++)
    {
        int n1, n2, n3, n4;
        scanf("%i %i %i %i", &n1, &n2, &n3, &n4);

        if (n1 < n4 && n2 < n3 || n1 < n3 && n2 < n4) printf("S\n");
        else printf("N\n");
    }
    
    return 0;
}
