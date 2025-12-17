//Paridade
#include <stdio.h>
#include <string.h>

int main()
{
    int aux = 0;
    char msg[100];
    scanf("%s", msg);
    for (int i  = 0; msg[i] != '\0'; i++)
        if (msg[i] == '1') aux++;
    
    if (aux%2 == 0) printf("%s0\n", msg);
    else printf("%s1\n", msg);
    return 0;
}
