//Alice no País do Jogo da Velha
#include <stdio.h>
#include <string.h>

int main()
{
    char tab[3];
    scanf("%s", tab);

    if (strcmp(tab, "XOX") == 0) printf("*\n");
    else if (strcmp(tab, "XXO") == 0 || strcmp(tab, "OXX") == 0) printf("Alice\n");
    else printf("?\n");

    return 0;
}
