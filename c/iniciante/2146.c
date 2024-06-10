//Senha
#include <stdio.h>

int main() {
    int senha;

    while (scanf("%i", &senha) != EOF)
    {
        printf("%i\n", (senha-1));
    }
    
    return 0;
}
