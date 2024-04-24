//Og
#include <stdio.h>

int main() 
{
    int m1, m2;

    while (scanf("%d%d", &m1, &m2))
    {
        if (m1 == 0 && m2 == 0) break;
        printf("%d\n", m1+m2);
    }
    
    return 0;
}
