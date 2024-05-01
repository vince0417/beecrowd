//Interceptando Informações
#include <stdio.h>

int main()
{
    int byte[8];
    for (int i = 0; i < 8; i++) scanf("%d", &byte[i]);
    for (int i = 0; i < 8; i++) 
    {
        if (byte[i] == 9)
        {
            printf("F\n");
            return 0;
        }
    }
    
    printf("S\n");
    return 0;
}
