//Sequência Lógica 2
#include <iostream>
using namespace std;

int main() {
    int n1, n2, cont = 0;

    cin >> n1 >> n2;

    for (int i = 1; i <= n1; i++)
    {
        cont += 1;
        if (cont < n1)
        {
            cout << i << " ";
        }

        if (cont == n1)
        {
            cout << i << endl;
            cont = 0;
        }
        
    }

    for (int i = n1+1; i <= n2; i++)
    {
         cont += 1;
        if (cont < n1)
        {
            cout << i << " ";
        }

        if (cont == n1)
        {
            cout << i << endl;
            cont = 0;
        }
    }
    
    
    return 0;
}
