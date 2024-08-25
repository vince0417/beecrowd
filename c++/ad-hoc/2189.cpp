//Quermesse
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int num {}, cont {1};

    while (cin >> num)
    {
        if (num == 0) return 0;

        for (int i = 0; i < num; i++)
        {
            int aux;
            cin >> aux;
            if ((i+1) == aux) 
            {
                cout << "Teste " << cont << endl;
                cout << (i+1) << endl;
                cout << endl;
                cont++;
            }
            
        }
        
    }
    
}
