//Sequencia IJ 3
#include <stdio.h>

int main () {
    int i = 1, j = 7, aux = 1;
    printf("I=%d J=%d\n", i, j);

    while (1)
    {
        i = i;
        j -= 1;
        aux += 1;
        printf("I=%d J=%d\n", i, j);

        if (aux == 3)
        {
            i += 2;
            j = 0;
            j = i + 6;
            printf("I=%d J=%d\n", i, j);
            aux = 1;
        }
        if (i == 9 && j == 15)
        {
            while (j != 13)
            {
                j -= 1;
                printf("I=%d J=%d\n", i, j);
            }
            
            break;
        }
    }
  
    return 0;
}
