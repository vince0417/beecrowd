//Tempo do Duende
#include <stdio.h>

int main() {
    int minutos, tP1, tP2;
    scanf("%i%i%i",&minutos, &tP1, &tP2);
    if ((tP1+tP2) <= minutos) printf("Farei hoje!\n");
    else printf("Deixa para amanha!\n");
    return 0;
}
