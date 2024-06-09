//Fibonacci Fácil
#include <stdio.h>

int main()
{
    int num;
    scanf("%i", &num);
    
    int cont[num];
    for(int id = 0; id < 2; id++)
    {
        cont[id] = id;
        printf("%i ", cont[id]);
    }
    
    for(int i = 2; i < num; i++)
    {
        if(i == num-1){
            cont[i] = cont[i-1]+cont[i-2];
            printf("%i\n", cont[i]);
        }
        else{
            cont[i] = cont[i-1]+cont[i-2];
            printf("%i ", cont[i]);
        }
        
    }
    
    return 0;
}
