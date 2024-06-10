//Ho Ho Ho
#include <stdio.h>

int main() {
    int num;
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
        if (i == (num-1))
        {
            printf("Ho!\n");
            return 0;
        }

        printf("Ho ");
    }
    
}
