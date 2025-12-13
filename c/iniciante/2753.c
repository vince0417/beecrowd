//Saída 7
#include <stdio.h>
#include <string.h>

int main(){
    char alfabeto[26] = {"abcdefghijklmnopqrstuvwxyz"};

    int cont = 97;
    for (int i = 0; alfabeto[i] != '\0'; i++){
        printf("%d e %c\n", cont, alfabeto[i]);
        cont++;
    }
    
    return 0;
}

// Neste problema estamos exibindo cada letra do alfabeto em minúsculas e sua posição na tabela ASCII;