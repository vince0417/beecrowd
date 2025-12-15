//Saída 1
#include <stdio.h>
#include <string.h>

int main() {
    char caixa[7][39];

    for (int l = 0; l < 7; l++)
    {
        for (int c = 0; c < 39; c++)
        {
            if (l == 0 || l == 7-1)
            {
                caixa[l][c] = '-';
                printf("%c", caixa[l][c]);
            }
            else if (c == 0 || c == 39-1)
            {
                caixa[l][c] = '|';
                printf("%c", caixa[l][c]);
            }
            else{
                caixa[l][c] = ' ';
                printf("%c", caixa[l][c]);
            }
            
        }
        printf("\n");
    }

    return 0;
}
