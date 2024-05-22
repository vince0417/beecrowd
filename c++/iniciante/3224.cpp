//Aaah!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string grito;
    int n1 {}, n2 {};

    for (int i = 0; i < 2; i++)
    {
        cin >> grito;

        for (int id = 0; id < grito.size(); id++)
        {
            if (i == 0 and grito.at(id) == 'a') n1++;
            if (i == 1 and grito.at(id) == 'a') n2++;
        }
        
    }
    
    if (n1 < n2) cout << "no\n";
    else cout << "go\n";

    return 0;
}
