//Alice no País do Jogo da Velha
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string tab;
    cin >> tab;

    if (tab == "XOX") cout << "*\n";
    else if (tab == "XXO" or tab == "OXX") cout << "Alice\n";
    else cout << "?\n";

    return 0;
}
