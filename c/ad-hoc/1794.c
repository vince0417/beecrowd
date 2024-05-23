//Lavanderia
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int la, lb, sa, sb;
    scanf("%d%d%d%d", &la,&lb,&sa,&sb);

    if (num >= la && num <= lb &&
        num >= sa && num <= sb) printf("possivel\n");
    else printf("impossivel\n");

    return 0;
}
