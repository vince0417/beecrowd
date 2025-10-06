//Balão++
#include <stdio.h>

int main() {
    double pi = 3.1415;
    long raio = 0, gas = 0; //Raio de cada balão e gás hélio disponível, respectivamente;
    scanf("%d%d", &raio, &gas);

    double volume = (1.33333333333)*(pi*(pow(raio,3))); //Volume de cada balão;
    printf("%i\n", (int)(gas/volume)); //Total de balões que é possível encher;
    return 0;
}
