//De Quem é a Vez?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testes;
    cin >> testes;

    for (int i = 0; i < testes; i++)
    {
        string play1, play2, escolha, escolha1;
        int n1, n2;
        cin >> play1 >> escolha >> play2 >> escolha1;
        cin >> n1 >> n2;

        if ((n1+n2)%2 == 0)
        {
            if (escolha == "PAR")
            {
                cout << play1 << endl;
            }
            else
                cout << play2 << endl;  
        }
        else{
            if (escolha == "IMPAR")
            {
                cout << play1 << endl;
            }
            else    
                cout << play2 << endl;
        }
        
    }
    
    return 0;
}
