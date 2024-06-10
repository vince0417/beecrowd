//I am Toorg!
#include <stdio.h>
#include <string.h>

int main() {
    int num, aux = 0;
    scanf("%i", &num);

    for (int i = 1; i <= num+1; i++)
    {
        aux++;
        char perg[50];
        scanf("%[^\n]", perg);
    }
    for (int i = 0; i < aux-1; i++) printf("I am Toorg!\n");

    return 0;
}
