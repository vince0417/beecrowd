//Galopeira
#include <stdio.h>
#include <string.h>

int main() {
    int num;
    scanf("%i", &num);

    for (size_t i = 0; i < num; ++i)
    {
        char palavra[10000];
        scanf("%s", palavra);
        double letras = strlen(palavra);
        printf("%.2lf\n", (letras/100));
    }
    return 0;
}
