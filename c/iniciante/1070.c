//Seis Números Ímpares
#include <stdio.h>

int main () {
    int num, max = 0;
    scanf("%d", &num);

    for (int i = num; max < 6; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
            max++;
        }    
    }
    
    return 0;
}
