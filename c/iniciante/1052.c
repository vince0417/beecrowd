//Mês
#include <stdio.h>
#include <string.h>

int main () {
    int mes;
    char ano[12][15] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    scanf("%d", &mes);
    printf("%s\n", ano[mes-1]);

    return 0;
}
