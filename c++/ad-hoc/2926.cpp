//Então é Natal!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    vector<string> frase {"Ent", "o eh ", "N", "t", "l!"};

    cin >> num;
    for (int i {}; i < num; i++)
    {
        frase.at(0).push_back('a');
        frase.at(2).push_back('a');
        frase.at(3).push_back('a');
    }
    
    cout << frase.at(0) << frase.at(1) << frase.at(2) << frase.at(3) << frase.at(4) << endl;
    return 0;
}
