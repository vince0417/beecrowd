//As Duas Torres
#include <stdio.h>

int main() {
    int dist, sarumanP, sauronP;
    scanf("%d%d%d", &dist, &sauronP, &sarumanP);

    float icm = ((float)dist/(sauronP+sarumanP));
    printf("%.2f\n", icm);
    return 0;
}
