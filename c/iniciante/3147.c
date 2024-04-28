//A Batalha dos Cinco Exércitos
#include <stdio.h>

int main()
{
    int ex[6];
    for (int i = 0; i < 6; i++) scanf("%d", &ex[i]);

    int bem = (ex[0]+ex[1]+ex[2]+ex[5]);
    int mal = (ex[3]+ex[4]);

    if (bem >= mal) printf("Middle-earth is safe.\n");
    else printf("Sauron has returned.\n");
    return 0;
}
