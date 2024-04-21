//O Bravo Guerreiro Hashmat
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long hashmat, inimigo;
    while (cin >> hashmat >> inimigo)
    {
        if (inimigo > hashmat)
        {
            cout << inimigo-hashmat << endl;
        }
        else
            cout << hashmat-inimigo << endl;
    }

    return 0;
}
