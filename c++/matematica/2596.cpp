//Xenlonguinho
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i {}; i < num; i++)
    {
        int esferas {}, invoca {};
        cin >> esferas;

        for (int id {1}; id <= esferas; id++)
        {
            int cont {};
            for (int x {1}; x <= id; x++)
            {
                if (id%x == 0) cont++;
            }
            if (cont%2 == 0) invoca++;
        }
        cout << invoca << endl;
    }
    
    return 0;
}
