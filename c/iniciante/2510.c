//Batmain
#include <stdio.h>
#include <string.h>

int main() {
    int num;
    scanf("%d", &num);
    for (size_t i = 0; i < num; ++i)
    {
        char vilao[26];
        scanf("%25[^\n]", vilao); //Inclui tudo, inclusive espaços, até encontrar um \n(enter);
        if (strcmp(vilao,"Batmain") == 0) printf("N\n");
        else printf("Y\n");
    }
    return 0;
}

//Batmain já capturou todos os vilões. Confuso, mas ele é a única pessoa que nunca foi capturado por ele;