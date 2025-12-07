//A Sociedade do Anel
#include <stdio.h>
#include <string.h>

int main() {
    int alistados; // Quantos recrutas alistaram-se;
    scanf("%i", &alistados);

    int total[5] = {0}; // Guarda o total de cada raça;
    char racas[5][10] = {"Hobbit(s)","Humano(s)","Elfo(s)","Anao(oes)","Mago(s)"};
    for (int i = 0; i < alistados; i++){
        char raca; // Raça do recruta;
        char nome[20]; // Nome do recruta;
        scanf("%s %c", nome, &raca);
        switch(raca){
            case 'X':
                total[0]++;
                break;
            case 'H':
                total[1]++;
                break;
            case 'E':
                total[2]++;
                break;
            case 'A':
                total[3]++;
                break;
            case 'M':
                total[4]++;
        }
    }
    
    for (int i = 0; i < 5; ++i){
        printf("%d %s\n", total[i], racas[i]);
    }

    return 0;
}
