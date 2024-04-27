//Balão de Honra
#include <stdio.h>

int main() 
{
    char alfa [30] = {"0ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char letra;
    scanf("%s", &letra);
    for (int i = 1; i <= 27; i++)
    {
        if (letra == alfa[i]) printf("%d\n", i);
    }

    return 0;
}
