//Saída 2
#include <stdio.h>
#include <string.h>

int main()
{
    char saida[7][39] = {
        {"---------------------------------------"},
        {"|        Roberto                      |"},
        {"|                                     |"},
        {"|        5786                         |"},
        {"|                                     |"},
        {"|        UNIFEI                       |"},
        {"---------------------------------------"}
    };

    for (int c = 0; c < 7; c++)
    {
        for (int l = 0; l < 39; l++)
        {
            printf("%c", saida[c][l]);
        }
        printf("\n");
    }
    return 0;
}
