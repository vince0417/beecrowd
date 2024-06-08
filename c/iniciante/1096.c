//Sequencia IJ 2
#include <stdio.h>

int main () {
    int i = 1, j = 7;

    printf("I=%d J=%d\n", i, j);
    while (i != 9 && j != 5)
    {
        i = i;
        j = j - 1;
        printf("I=%d J=%d\n", i, j);

        if (j == 5)
        {
            i += 2;
            j += 2;
            printf("I=%d J=%d\n", i, j);
        }
        if (i == 9 && j == 7)
        {
            while (j != 5)
            {
                i = i;
                j -= 1;
                printf("I=%d J=%d\n", i, j);
            }
                
        }
        
    }
    
    return 0;

}
