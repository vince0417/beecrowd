//Getline One
#include <stdio.h>
#include <string.h>

int main() {
    double total = 0.0;
    char amigo[50];
    int metros = 0, amigos = 0;
    while (scanf("%49[^\n]", amigo) != EOF) //Usamos %[^\\n]", para ler até encontrar \n;
    {
        scanf("%i", &metros);
        total += metros;
        ++amigos;
    }
    double media = (total/amigos);
    printf("%.1lf\n", media);
    return 0;
}
