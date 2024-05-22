//Aaah!
#include <stdio.h>
#include <string.h>

int main()
{
    char grito[1000];
    int n1 = 0, n2 = 0;

    for (int i = 0; i < 2; i++)
    {
        scanf("%s", grito);

        for (int id = 0; grito[id] != '\0'; id++)
        {
            if (i == 0 && grito[id] == 'a') n1++;
            if (i == 1 && grito[id] == 'a') n2++;
        }
        
    }
    
    if (n1 < n2) printf("no\n");
    else printf("go\n");

    return 0;
}
