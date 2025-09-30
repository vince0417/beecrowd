//Pedra, Papel, Ataque Aéreo
#include <stdio.h>
#include <string.h>

void resultado(char jogador1[10], char jogador2[10]); //Protótipo;

int main() {
    int num; //Casos de teste;
    scanf("%d", &num);
    for (size_t i = 0; i < num; ++i) {
        char jogador1[10], jogador2[10]; //Jogador/escolha;
        scanf("%s%s", jogador1, jogador2);
        if (strcmp(jogador1,jogador2) == 0) {
            if (strcmp(jogador1,"ataque") == 0) printf("Aniquilacao mutua\n");
            else if (strcmp(jogador1,"pedra") == 0) printf("Sem ganhador\n");
            else printf("Ambos venceram\n");
            continue;
        }
        resultado(jogador1,jogador2);
    }
    return 0;
}

void resultado(char jogador1[10], char jogador2[10]) {
    char temp[15];
    strcat(jogador1," "); //Concatena jogador1 com " ", ou seja, jogado1 += " ";
    sprintf(temp,"%s%s", jogador1,jogador2); //Concatena jogador1 e jogador2 e guarda em temp;
    char aux[3][15] = {"ataque papel", "pedra papel", "ataque pedra"};
    for (int i = 0; i < 3; ++i) {
        if (strcmp(temp,aux[i]) == 0){
            printf("Jogador 1 venceu\n");
            return;
        }
    }
    printf("Jogador 2 venceu\n");
}
