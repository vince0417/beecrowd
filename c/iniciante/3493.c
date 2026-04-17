//Copos empilhados
#include <stdio.h>

int main(){
    int recordAtual = 0, tentativa = 0;
    while(scanf("%i%i", &recordAtual, &tentativa) != EOF){
        if(tentativa > recordAtual) printf("ok\n");
        else printf("no\n");
    }
    return 0;
}
