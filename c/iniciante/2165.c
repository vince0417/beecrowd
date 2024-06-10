//Tuitando
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[500];
    scanf("%[^\n]", frase);

    if (strlen(frase) <= 140) printf("TWEET\n");
    else printf("MUTE\n");

    return 0;
}
