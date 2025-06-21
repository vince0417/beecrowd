//Números Má Sorte Recarregados
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num{};
    cin >> num;

    for (int i {1}; i < num.size(); i++)
    {
        if (num.at(i) == '3' and num.at(i-1) == '1')
        {
            cout << num << " es de Mala Suerte\n";
            return 0;
        }
    }
    
    cout << num << " NO es de Mala Suerte\n";
    return 0;
}
