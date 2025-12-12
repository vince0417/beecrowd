//Números Má Sorte Pequenos
#include <stdio.h>
#include <string.h>

int main(){
    char num[18];
    scanf("%s", num);
    
    for (int i = 0; num[i] != '\0'; i++){
        if (num[i] == '1' && num[i+1] == '3'){
            printf("%s es de Mala Suerte\n", num);
            return 0;
        }
    }
    
    printf("%s NO es de Mala Suerte\n", num);
    return 0;
}
