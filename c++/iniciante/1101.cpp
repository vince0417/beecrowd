//Sequência de Números e Soma
#include <iostream>
using namespace std;

int main() {
    int n1, n2, soma = 0;

    while (true)
    {
        cin >> n1 >> n2;

        if (n1 <= 0 or n2 <= 0)
        {
            break;
        }
        else if (n1 > n2)
        {
            int aux = n1;
            n1 = n2;
            n2 = aux;
        }

        for (int i = n1; i <= n2; i++)
        {
            cout << i << " ";
            soma += i;
        }
        
        cout << "Sum=" << soma << endl;
        soma = 0;
    }
    
    return 0;
}
