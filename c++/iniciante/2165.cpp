//Tuitando
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string frase;
    getline(cin, frase);

    if (frase.size() <= 140) cout << "TWEET\n";
    else cout << "MUTE\n";

    return 0;
}
