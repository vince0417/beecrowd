//Zerinho ou Um
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;

    while (cin >> n1 >> n2 >> n3)
    {
        if (n1 != n2 and n2 == n3) cout << "A\n";
        else if (n1 == n3 and n2 != n3) cout << "B\n";
        else if (n1 == n2 and n2 != n3) cout << "C\n";
        else cout << "*\n";
    }
    
    return 0;
}
