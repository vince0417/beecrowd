//Overflow
#include <stdio.h>

int main()
{   
    char simbolo;
    int num, n1, n2;
    scanf("%i", &num);
    scanf("%i %c %i", &n1, &simbolo, &n2);

    if (simbolo == '+')
    {
        if ((n1+n2) <= num) printf("OK\n");
        else printf("OVERFLOW\n");
    }
    else if (simbolo == '*') 
    {
        if ((n1*n2) <= num) printf("OK\n");
        else printf("OVERFLOW\n");
    }
    
    return 0;
}
