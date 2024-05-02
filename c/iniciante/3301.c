//Sobrinho do Meio
#include <stdio.h>

int main()
{
    int n1, n2, n3;
    scanf("%d%d%d", &n1,&n2,&n3);

    if (n1 > n2 && n1 < n3 || n1 < n2 && n1 > n3) printf("huguinho\n");
    else if (n2 > n1 && n2 < n3 || n2 < n1 && n2 > n3) printf("zezinho\n");
    else printf("luisinho\n");
    return 0;
}
