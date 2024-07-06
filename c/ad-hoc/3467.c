//Esse é o meu lugar!
#include <stdio.h>
#include <string.h>

int main()
{
    char sofa[3];

    while (scanf("%s", sofa) != EOF)
    {
        if (strcmp(sofa, "xxL") == 0) printf("Esse eh o meu lugar\n");
        else printf("Oi, Leonard\n");
    }
    
    return 0;
}
