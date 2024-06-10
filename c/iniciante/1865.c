//Mjölnir
#include <stdio.h>
#include <string.h>

int main() {
    int num;
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
        char nome[10];
        int forca;
        scanf("%s%i", nome, &forca);

        if (strcmp(nome, "Thor") == 0 || strcmp(nome, "thor") == 0 && forca == 50) 
        {
            printf("Y\n");
        }
        else printf("N\n");
    }
    
    return 0;
}
