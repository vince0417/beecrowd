//Número Primo
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int x, aux {0};
        cin >> x;
        for (int cont = 2; cont < x; cont++)
        {
            if (x%cont == 0) 
            {
                aux++;
                cout << x << " nao eh primo\n";
                break;
            }
        }
        if (aux == 0) cout << x << " eh primo\n";
    }
    
    return 0;
}
