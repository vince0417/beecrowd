//Primo Rápido
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i {}; i < num; i++)
    {
        int n {};
        cin >> n;
        
        bool primo = false;
        for (int x = 2; x*x < n; x++)
        {
            if (n%x == 0) 
            {
                primo = true;
                break;
            }

        }

        if (primo == false) cout << "Prime\n";
        else cout << "Not Prime\n";
        
    }

    return 0;
}
