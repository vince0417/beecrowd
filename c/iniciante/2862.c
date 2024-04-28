//Inseto!
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        int poder;
        scanf("%d", &poder);
        if (poder <= 8000) printf("Inseto!\n");
        else printf("Mais de 8000!\n");
    }
    
    return 0;
}
