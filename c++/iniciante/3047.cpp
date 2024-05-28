//A idade de Dona Mônica
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> idade (3);

    for (int i {}; i < idade.size(); i++) cin >> idade.at(i);

    int maisVelho = (idade.at(0)) - (idade.at(1)+idade.at(2));

    if (idade.at(1) < idade.at(2))
    {
        int aux = idade.at(1);
        idade.at(1) = idade.at(2);
        idade.at(2) = aux;
    }
    
    if (maisVelho >= idade.at(1)) cout << maisVelho << endl;
    else if (idade.at(1) > maisVelho) cout << idade.at(1) << endl;
    else cout << idade.at(2) << endl;

    return 0;
}
