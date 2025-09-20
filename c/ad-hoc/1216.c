//Getline One
#include <stdio.h>
#include <string.h>

int main() {
    double total = 0;
    char amigo[25];
    int metros, amigos = 0;
    while (scanf("%24[^\n]", amigo) != EOF)
    {
        scanf("%i", &metros);
        total += metros;
        ++amigos;
    }
    long double media = (total/amigos);
    printf("%.1Lf\n", media);
    return 0;
}

/*
    O problema é simples, adicionamos cada distância entre a casa de Mangojata e de seu amigo,
    em seguida dividimos o total pelo número de amigos, usando double para ser mais preciso.
*/