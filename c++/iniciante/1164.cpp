//Número Perfeito
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
       int n, soma = 0;
       cin >> n;
       for (int cont = 1; cont < n; cont++)
       {
            if (n%cont == 0)
            {
                soma += cont;
            }
            
       }
       if (soma == n)
       {
            cout << n << " eh perfeito" << endl;
       }
       else{
            cout << n << " nao eh perfeito" << endl;
       }
         
    }
    
    return 0;
}
