//Ache a senha!
#include <stdio.h>

int main(){
    int n1, n2, n3, n4;
    while(scanf("%i%i%i%i", &n1, &n2, &n3, &n4) != EOF){
        printf("%i%i%i%i\n", n1, n2, n3, n4);
        if((n1+n2+n3+n4) == 0) break;
    }
    return 0;
}
