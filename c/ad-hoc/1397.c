//Jogo do Maior
#include <stdio.h>

int main()
{
    int num;
    while (scanf("%d", &num))
    {
        if (num == 0) break;
        int t1 = 0, t2 = 0;
        for (int i = 0; i < num; i++)
        {
            int n1, n2;
            scanf("%d%d", &n1, &n2);
            
            if (n1 > n2) t1++;
            else if (n2 > n1) t2++;
        }
        printf("%d %d\n", t1, t2);
    }
    
    return 0;
}
