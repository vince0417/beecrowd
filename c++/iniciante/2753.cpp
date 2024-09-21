//Saída 7
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string alfabeto {"abcdefghijklmnopqrstuvwxyz"};

    int cont {97};
    for (int i = 0; i < alfabeto.size(); i++)
    {
        cout << cont << " e " << alfabeto.at(i) << '\n';
        cont++;
    }
    
    return 0;
}
