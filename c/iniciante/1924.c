//Vitória e a Indecisão
#include <stdio.h>
#include <string.h>

int main() {
    int num;
    scanf("%i", &num);

    for (int i = 1; i <= num+1; i++)
    {
        char curso;
        scanf("%[^\n]", curso);
    }


    printf("Ciencia da Computacao\n");
    return 0;
}
