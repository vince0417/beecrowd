//Feedback
#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    int membro[4] = {1,2,3,4};
    char user[4][20] = {"Rolien","Naej","Elehcim","Odranoel"};

    scanf("%i", &num);
    for (int i = 0; i < num; i++)
    {
        int x;
        scanf("%i", &x);
        for (int cont = 0; cont < x; cont++)
        {
            int aux;
            scanf("%i", &aux);
            for (int id = 0; id < 4; id++)
            {
                if (aux == membro[id])
                {
                    printf("%s\n", user[id]);
                    break;
                }
            }
            
        }
        
    }
    
    return 0;
}
