//Entrada e Saída Lendo e Pulando Nomes
#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];
    for (int i = 1; i <= 10; i++){
        scanf("%s", nome);
        if (i == 3 || i == 7 || i == 9) printf("%s\n", nome);
    }
    return 0;
}
