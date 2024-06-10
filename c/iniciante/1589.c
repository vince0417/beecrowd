//Bob Conduite
#include <stdio.h>

int main()
{
    int num;
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
        int n1, n2;
        scanf("%d%d", &n1, &n2);

        printf("%i\n", (n1+n2));
    }
    
    return 0;
}
