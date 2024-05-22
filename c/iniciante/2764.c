//Entrada e Saída de Data
#include <stdio.h>
#include <string.h>

int main()
{
    char data[8];
    scanf("%s", data);

    printf("%c%c/%c%c/%c%c\n", data[3],data[4],data[0],data[1],data[6],data[7]);

    printf("%c%c/%c%c/%c%c\n", data[6],data[7],data[3],data[4],data[0],data[1]);

    printf("%c%c-%c%c-%c%c\n", data[0],data[1],data[3],data[4],data[6],data[7]);

    return 0;
}
