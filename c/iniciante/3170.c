//Bolinhas de Natal
#include <stdio.h>

int main()
{
    int bolas, galhos;
    scanf("%d%d", &bolas, &galhos);

    if (2*bolas >= galhos || 2*bolas == galhos-1) printf("Amelia tem todas bolinhas!\n");
    else printf("Faltam %d bolinha(s)\n", (galhos-(2*bolas))/2);
    return 0;
}
