//Pares e Ímpares
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int total{}, num{};
    vector<int> par{};
    vector<int> impar{};

        cin >> total;
    for (int i = 0; i < total; i++)
    {
        cin >> num;

        if (num%2 == 0) par.push_back(num);
        else impar.push_back(num);
    }
    
    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end());

    for (int i = 0; i < par.size(); i++)
        cout << par.at(i) << "\n";

    for (int i = impar.size()-1; i >= 0; i--)
        cout << impar.at(i) << "\n";

    return 0;

}
