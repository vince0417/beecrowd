//Primo Rápido
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num;
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
        int n = 0;
        scanf("%i", &n);
        
        bool primo = false;
        for (int x = 2; x*x < n; x++)
        {
            if (n%x == 0) 
            {
                primo = true;
                break;
            }
        }

        if (primo == false) printf("Prime\n");
        else printf("Not Prime\n");   
    }

    return 0;
}
