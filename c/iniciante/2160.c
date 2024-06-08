//Nome no Formulário
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[500];
    fgets(frase, 499, stdin);

    if ((strlen(frase)-1) > 80) printf("NO\n");
    else printf("YES\n");

    return 0;
}
