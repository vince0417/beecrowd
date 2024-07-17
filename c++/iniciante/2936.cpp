//Quanta Mandioca?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> grama {300,1500,600,1000,150};
    vector<int> porcao(5);

    int soma {225};
    for (int i {}; i < 5; i++)
    {
        cin >> porcao.at(i);
        soma += (porcao.at(i)*grama.at(i));
    }

    cout << soma << endl;
    return 0;
}
