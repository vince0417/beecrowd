//Números Má Sorte Pequenos
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin >> num;
    
    for (int i = 0; i < num.size()-1; i++)
    {
        if (num.at(i) == '1' and num.at(i+1) == '3')
        {
            cout << num << " es de Mala Suerte\n";
            return 0;
        }
    }
    
    cout << num << " NO es de Mala Suerte\n";
    return 0;
}
