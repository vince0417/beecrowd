//Balão de Honra
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string alfa {"0ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char letra;
    cin >> letra;
    for (int i = 1; i <= alfa.size(); i++)
    {
        if (letra == alfa[i]) cout << i << endl;
    }

    return 0;
}
