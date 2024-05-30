//Estados do Norte
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> norte {"roraima","acre","amapa","amazonas","para","rondonia","tocantins"};
    string estado;

    cin >> estado;
    for (int i {}; i < norte.size(); i++)
    {
        if (estado == norte.at(i))
        {
            cout << "Regiao Norte\n";
            return 0;
        }
    }
    
    cout << "Outra regiao\n";
    return 0;
}
