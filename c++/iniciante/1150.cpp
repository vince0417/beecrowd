//Ultrapassando Z
#include <iostream>
using namespace std;

int main() {
    int n1, n2, soma = 0, cont = 0;
    cin >> n1 >> n2;

    if (n2 <= n1 or n2 == n1+1)
    {
        while (n2 <= n1 or n2 == n1+1)
        {
            cin >> n2;
        }
        
    }

    while (soma <= n2)
    {
        soma += n1;
        n1 += 1;
        cont += 1;
    }
    
    cout << cont << endl;
    return 0;
}
