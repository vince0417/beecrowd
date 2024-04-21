//Sequência Lógica
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        int x = i*i;
        printf("%d %d %d\n", i, x, i*x);
        printf("%d %d %d\n", i, x+1, (i*x)+1);
    }
    
    return 0;
}
