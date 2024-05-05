//Death Knight Hero
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, cont {0};
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        string habi;
        cin >> habi;

        for (int id = 0; id < habi.size()-1; id++)
        {
            if (habi.at(id) == 'C' and habi.at(id+1) == 'D') 
            {
                cont++; 
                break;
            }
        }
    }
    
    cout << num-cont << endl;
    return 0;
}
