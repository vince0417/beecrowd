//Funções
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    for (int i {}; i < num; i++)
    {
        int x {}, y {};
        cin >> x >> y;
    
        int rafael {}, beto {}, carlos {};
    
        rafael = ((3*x)*(3*x)) + (y*y);
        beto = (2*(x*x)) + ((5*y)*(5*y));
        carlos = (-100*x) + (y*y*y);
    
        vector<int> ordem {rafael, beto, carlos};
        sort(ordem.begin(), ordem.end());
    
        if (ordem.at(2) == rafael) cout << "Rafael ganhou\n";
        else if (ordem.at(2) == beto) cout << "Beto ganhou\n";
        else cout << "Carlos ganhou\n";
    }

    return 0;
}
