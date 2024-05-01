//Keanu
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int white = 0, black = 0;
    if (num%2 == 1)
    {
        black = (num*num-1)/2;
        white = black+1;
    }
    else{
        white = (num*num)/2;
        black = (num*num)/2;
    }

    printf("%d casas brancas e %d casas pretas\n", white, black);
    return 0;
}
