//Sequencia IJ 1
#include <stdio.h>

int main () {

    int i = 1, j = 60;

    printf("I=%d J=%d\n", i, j);
    while (j != 0)
    {
        i = i + 3;
        j = j - 5;

        printf("I=%d J=%d\n", i, j);
    }
    
    return 0;

}
