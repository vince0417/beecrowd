//Inversão de Número
#include <stdio.h>

int main(){
    char num[3];
    scanf("%s", num);

    printf("Invertido = ");
    for(int i = 2; i >= 0; i--) printf("%c", num[i]);
    printf("\n");
    return 0;
}
