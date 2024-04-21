//Soma de Pares Consecutivos
#include <iostream>
using namespace std;

int main() {
    int x, cont = 0, soma = 0;
    
    while (true)
    {
        cin >> x;
        if (x == 0)
        {
            break;
        }
        
        while (cont < 5)
        {
            if (x%2 == 0)
            {
                soma += x;
                cont += 1;
            }
            x++;
        }
        
        cout << soma << endl;
        soma = 0;
        cont = 0;
    }
    
    
    return 0;
}
