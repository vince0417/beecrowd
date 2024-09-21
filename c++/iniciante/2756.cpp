//Saída 10
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> ordem {"       A", "      B B", "     C   C", "    D     D", "   E       E"};
    
    for (int i {}; i < ordem.size(); i++) cout << ordem.at(i) << '\n';
    for (int i = ordem.size()-2; i >= 0; i--) cout << ordem.at(i) << '\n';

    return 0;
}
