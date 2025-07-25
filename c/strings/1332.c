//Um-Dois-Três
#include <stdio.h>
#include <string.h>

int main()
{
    int num = 0;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        char palavra[5];
        scanf("%s", palavra);
        switch (strlen(palavra))
        {
        case 5:
            printf("3\n");
            continue;
        case 3:
            if (palavra[0] == 'o' && palavra[1] == 'n' ||
                palavra[1] == 'n' && palavra[2] == 'e' ||
                palavra[0] == 'o' && palavra[2] == 'e') printf("1\n");
            else printf("2\n");;
        }
    }
    return 0;
}
