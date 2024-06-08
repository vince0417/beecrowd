//Soma de Ímpares Consecutivos II
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        int n1, n2, soma = 0;
        scanf("%d%d", &n1, &n2);
        if (n1 > n2)
        {
            int aux = n1;
            n1 = n2;
            n2 = aux;
        }
        
        for (int cont = n1+1; cont < n2; cont++)
        {   
            if (cont%2 == 1) soma += cont;   
        }
        printf("%d\n", soma);
    }
    
    return 0;
}
