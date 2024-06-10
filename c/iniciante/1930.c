//Tomadas
#include <stdio.h>

int main() {
    int t1, t2, t3, t4;
    scanf("%i%i%i%i", &t1, &t2, &t3, &t4);

    int total = (t1+t2) + (t3+t4) - 3;
    printf("%d\n", total);

    return 0;
}
