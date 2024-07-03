//Conversor
#include <stdio.h>
#include <string.h>

int main()
{
    char tabelaP[10][7] = {"zero","um","dois","tres","quatro","cinco","seis","sete","oito","nove"};
    char tabelaN[10][7] = {"0","1","2","3","4","5","6","7","8","9"};

    char num[7];
    scanf("%s", num);

    for (int i = 0; i <= 9; i++)
    {
        if (strcmp(num, tabelaP[i]) == 0) printf("%s\n", tabelaN[i]);
        if (strcmp(num, tabelaN[i]) == 0) printf("%s\n", tabelaP[i]);
    }
    
    return 0;
}
