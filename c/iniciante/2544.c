//Kage Bunshin no Jutsu
#include <stdio.h>

int main() {
    long num;
    while (scanf("%li", &num) != EOF)
    {
        int cont = 0, aux = 1;
        while (aux < num) {
            aux *= 2;
            ++cont;
        }
        printf("%d\n", cont);
    }
    
    return 0;
}
