////Ímpar, Par ou Roubo
#include <stdio.h>

int main() {
    int jogador1 = 0, escolha1 = 0, escolha2 = 0, roubo = 0, acusado = 0;
    scanf("%d%d%d%d%d", &jogador1, &escolha1, &escolha2, &roubo, &acusado);

    int soma = (escolha1+escolha2);
    if (jogador1 == 1){
        if (roubo == 1 && acusado == 0 || roubo == 0 && acusado == 0 && soma%2 == 0
            || roubo == 0 && acusado == 1 && soma%2 == 0){
            printf("Jogador 1 ganha!\n");
        }
        else printf("Jogador 2 ganha!\n");
    }else {
        if (roubo == 1 && acusado == 0 || roubo == 0 && acusado == 0 && soma%2 == 1
            || roubo == 0 && acusado == 1 && soma%2 == 1){
            printf("Jogador 1 ganha!\n");

        }
        else printf("Jogador 2 ganha!\n");

    }
    return 0;
}

//Lendo o que o problema pede, torna-se simples compreender este código;
