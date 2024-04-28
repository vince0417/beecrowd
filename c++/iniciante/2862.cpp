//Inseto!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int poder;
        cin >> poder;
        if (poder <= 8000) cout << "Inseto!\n";
        else cout << "Mais de 8000!\n";
    }
    
    return 0;
}
