//Paridade
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int aux{};
    string msg{};
    cin >> msg;
    for (int i {}; i < msg.size(); i++)
        if (msg.at(i) == '1') aux++;
    
    if (aux%2 == 0) cout << msg+'0' << "\n";
    else cout << msg+'1' << "\n";
    return 0;
}
