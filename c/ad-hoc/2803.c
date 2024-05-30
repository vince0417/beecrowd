//Estados do Norte
#include <stdio.h>
#include <string.h>

int main()
{
    char norte[7][15] = {"roraima","acre","amapa","amazonas","para","rondonia","tocantins"};
    char estado[15];

    scanf("%s", estado);
    for (int i = 0; norte[i][15] != '\0'; i++)
    {
        if (strcmp(estado, norte[i]) == 0)
        {
            printf("Regiao Norte\n");
            return 0;
        }
    }
    
    printf("Outra regiao\n");
    return 0;
}
