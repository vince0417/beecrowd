//Saída 2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> saida{
        {"---------------------------------------"},
        {"|        Roberto                      |"},
        {"|                                     |"},
        {"|        5786                         |"},
        {"|                                     |"},
        {"|        UNIFEI                       |"},
        {"---------------------------------------"}
    };

    for (int c = 0; c < saida.size(); c++)
    {
        for (int l = 0; l < saida[c].size(); l++)
        {
            cout << saida[c][l];
        }
        cout << "\n";
    }
    return 0;
}
