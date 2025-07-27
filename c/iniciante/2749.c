//Saída 3
#include <stdio.h>

int main()
{
    printf("---------------------------------------\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int x = 1; x <= 39; x++)
        {
            if (x == 1 || x == 39) printf("|");
            else if (i == 1 && x == 2){
                printf("x = 35");
                x+=5;
            }
            else if (i == 3 && x == 17){
                printf("x = 35");
                x+=5;
            }
            else if (i == 5 && x == 33){
                printf("x = 35");
                x+=5;
            }else printf(" ");

        }
        printf("\n");
    }
    printf("---------------------------------------\n");
    return 0;
}
