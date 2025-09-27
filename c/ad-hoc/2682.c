//Detector de Falhas
#include <stdio.h>

int main() {
    int num = 0, anterior = 0, cont = 0, encontrado = 0;
    while (scanf("%i", &num) != EOF)
    {
        if (cont >= 1 && num < anterior) {
            if (encontrado == 0) {
                printf("%d\n", (anterior+1));
                ++encontrado;
            }
        }
        anterior = num;
        cont++;
    }
    if (encontrado == 0) printf("%i\n", (num+1)); //A máquina não apresentou problema;
    return 0;
}
