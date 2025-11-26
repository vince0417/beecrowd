//Léxico
#include <stdio.h>
#include <string.h>

int main(){
    char str1[21], str2[21];
    scanf("%s%s", str1, str2);
    if(strlen(str1) > strlen(str2)){
        char temp[21];
        strcpy(temp,str1); //Copia o conteúdo de str1 para temp;
        strcpy(str1,str2);
        strcpy(str2,temp);
    } //Troca os valores das strings;

    int aux = 0; //Para saber que a solução já foi encontrada e evitar mais de um return;
    for (size_t i = 0; str1[i] != '\0'; i++){
        if(str1[i] < str2[i]){
            printf("%s\n%s\n", str1, str2);
            aux = 1;
            break;
        }else if(str2[i] < str1[i]){
            printf("%s\n%s\n", str2, str1);
            aux = 1;
            break;
        }
    }
    
    if(aux == 0) printf("%s\n%s\n", str1, str2);
    return 0;
}

//Este algoritmo usa uma comparação de caracteres levando em conta sua posição na tabela ASCII;
//Para um maior entendimento do código busque pelo problema na plataforma beecrowd;