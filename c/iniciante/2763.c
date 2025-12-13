//Entrada e Saída CPF
#include <stdio.h>
#include <string.h>

int main()
{
    char cpf[15];
    scanf("%s", cpf);

    for(int i = 0; cpf[i] != '\0'; i++){
        if (cpf[i] == '.' || cpf[i] == '-') printf("\n");
        else printf("%c", cpf[i]);
    }
    
    printf("\n");
    return 0;
}
