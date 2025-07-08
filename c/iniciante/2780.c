//Basquete de Robôs
#include <stdio.h>

int main()
{
    int robo = 0;
    scanf("%i", &robo);

    if (robo <= 800) printf("1\n");
    else if (robo > 800 && robo <= 1400) printf("2\n");
    else printf("3\n");

    return 0;
}
