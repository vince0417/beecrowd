//Divisibilidade Por 3
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int quantN {};

    while (cin >> quantN)
    {
        string num {};
        cin >> num;

        int soma {};
        for (int i {}; i < quantN; i++) soma += num.at(i) - '0';
      
        if (soma%3 == 0) cout << soma << " sim\n";
        else cout << soma << " nao\n";

    }

    return 0;    
}
