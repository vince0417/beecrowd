//Botas Perdidas
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    while (cin >> num)
    {
        vector<int> tBota(num);
        vector<char> pe(num);
        int cont {0};

        for (int i = 0; i < num; i++)
        {
            cin >> tBota.at(i) >> pe.at(i);
            for (int id = i; id >= 0; id--)
            {
                if (tBota.at(i) == tBota.at(id)
                    and pe.at(i) != pe.at(id))
                {
                    cont++;
                    tBota.at(i) = 0; 
                    tBota.at(id) = 0; 
                    pe.at(i) = 0;
                    pe.at(id) = 0;
                }
                
            }
        
        }
        cout << cont << endl;
    }
    
    return 0;
}
