//Interceptando Informações
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int byte[8];
    for (int i = 0; i < 8; i++) cin >> byte[i];
    for (int i = 0; i < 8; i++) 
    {
        if (byte[i] == 9)
        {
            cout << "F\n";
            return 0;
        }
    }
    
    cout << "S\n";
    return 0;
}
