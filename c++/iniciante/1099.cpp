//Soma de Ímpares Consecutivos II
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int n1, n2, soma = 0;
        cin >> n1 >> n2;
        if (n1 > n2)
        {
            int aux = n1;
            n1 = n2;
            n2 = aux;
        }
        
        for (int cont = n1+1; cont < n2; cont++)
        {   
            if (cont%2 == 1)
            {
                soma += cont;
            }
            
        }
        cout << soma << endl;
    }
    
    return 0;
}
