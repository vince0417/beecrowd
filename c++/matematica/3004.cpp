//Envelopes
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casosT{};
    cin >> casosT;

    for (int i {}; i < casosT; i++)
    {
        int n1{}, n2{}, n3{}, n4{};
        cin >> n1 >> n2 >> n3 >> n4;

        if (n1 < n4 and n2 < n3 or n1 < n3 and n2 < n4) cout << "S\n";
        else cout << "N\n";
    }
    
    return 0;
}
