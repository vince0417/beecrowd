//MacPRONALTS
#include <bits/stdc++.h>
using namespace std;

float caixa(int &pedido, int &quantidade)
{
    float soma {};
    vector<int> produtos {1001,1002,1003,1004,1005};
    vector<float> valores {1.50,2.50,3.50,4.50,5.50};

    for (int i {}; i < produtos.size(); i++)
    {
        if (pedido == produtos.at(i))
        {
            soma = (quantidade*valores.at(i));
        }
    }
    
    return soma;
}

int main()
{
    int casos {};
    cin >> casos;

    float conta {};
    int pedido {}, quantidade {};
    for (int i {}; i < casos; i++)
    {
        cin >> pedido >> quantidade;
        conta += caixa(pedido,quantidade);
    }
    
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << conta << '\n';
    return 0;
}
