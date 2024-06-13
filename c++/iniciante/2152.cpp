//Pepe, Já Tirei a Vela!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i {}; i < num; i++)
    {
        string n1, n2;
        int n3;
        cin >> n1 >> n2 >> n3;

        if (n1.size() == 1 or n2.size() == 1)
        {
            if (n1.size() == 1) n1.insert(n1.begin(), '0'); 
            if (n2.size() == 1) n2.insert(n2.begin(), '0');
            
            if (n3 == 1) cout << n1 << ":" << n2 << " - A porta abriu!\n";
            else cout << n1 << ":" << n2 << " - A porta fechou!\n"; 
        }
        else{
            if (n3 == 1) cout << n1 << ":" << n2 << " - A porta abriu!\n";
            else cout << n1 << ":" << n2 << " - A porta fechou!\n"; 
        }
    }
    
    return 0;
}
