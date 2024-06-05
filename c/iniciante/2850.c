//Papagaio Poliglota
#include <stdio.h>
#include <string.h>

int main()
{
    char linguagem[15];

    while (scanf("%s[^\n]", linguagem) != EOF)
    {
        if (strcmp(linguagem, "esquerda") == 0) printf("ingles\n");
        else if (strcmp(linguagem, "direita") == 0) printf("frances\n");
        else if (strcmp(linguagem, "nenhuma") == 0) printf("portugues\n");
        else if (strcmp(linguagem, "as")) printf("caiu\n"); 
    }  

    return 0;
}
