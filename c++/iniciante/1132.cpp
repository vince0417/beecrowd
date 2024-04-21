//Múltiplos de 13
#include <iostream>
using namespace std;

int main () {
    int n1, n2, soma = 0;

    cin >> n1 >> n2;

    if (n1 < n2)
    {
        for (int i = n1; i <= n2; i++)
        {
            if (i%13 != 0)
            {
                soma = soma + i;
            }
        }
    }
    else
        for (int i = n2; i != n1; i++)
        {
            if (i%13 != 0)
            {
                soma = soma + i;
            }
        }

    cout << soma << endl;
    return 0;
    
}
