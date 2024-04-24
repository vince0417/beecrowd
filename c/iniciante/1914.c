//De Quem é a Vez?
#include <stdio.h>
#include <string.h>

int main()
{
    int testes;
    scanf("%d", &testes);

    for (int i = 0; i < testes; i++)
    {
        char play1[20], play2[20], escolha[10], escolha1[10];
        int n1, n2;
        scanf("%s %s %s %s", play1, escolha, play2, escolha1);
        scanf("%d%d", &n1, &n2);

        if ((n1+n2)%2 == 0)
        {
            if (strcmp(escolha, "PAR") == 0) printf("%s\n", play1);
            else printf("%s\n", play2);
        }
        else{
            if (strcmp(escolha, "IMPAR") == 0) printf("%s\n", play1);
            else printf("%s\n", play2);
        }
        
    }
    
    return 0;
}
