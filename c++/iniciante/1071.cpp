//Soma de Impares Consecutivos I
#include <iostream>
using namespace std;

int main () {

    int n1, n2, soma = 0;

    cin >> n1 >> n2;

    if (n1>n2)
    {
        for (int i = (n1-1); i > n2; i--)
        {
            if (abs(i)%2 == 1)
            {
                soma = soma + i;
            }
            
        }
        
        cout << soma << endl;
    }
    else{

        for (int i = (n2-1); i > n1; i--)
        {
            if (abs(i)%2 == 1)
            {
                soma = soma + i;
            }
            
        }

        cout << soma << endl;
    }
    
    return 0;
}
