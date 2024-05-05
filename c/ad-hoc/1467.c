//Zerinho ou Um
#include <stdio.h>

int main()
{
    int n1, n2, n3;

    while ((scanf("%d%d%d", &n1,&n2,&n3) != EOF))
    {
        if (n1 != n2 && n2 == n3) printf("A\n");
        else if (n1 == n3 && n2 != n3) printf("B\n");
        else if (n1 == n2 && n2 != n3) printf("C\n");
        else printf("*\n");
    }
    
    return 0;
}
