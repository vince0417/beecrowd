//Sequência Secreta
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int total {}, aux {}, num {2}, resposta {};
    cin >> total;
    
    for (int i = 0; i < total; i++)
    {
        cin >> aux;

        if (aux != num) 
        {
            resposta++;
            num = aux;
        }
    
    }

    cout << resposta << '\n';
    return 0;
}

