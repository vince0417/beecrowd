//Umil Bolt
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num{};
    while (cin >> num)
    {
        float tentativa{};
        vector<float> tentativas;
        for (int i = 0; i < num; i++)
        {
            cin >> tentativa;
            tentativas.push_back(tentativa);
        }
        sort(tentativas.begin(), tentativas.end());
        cout << tentativas.at(0) << "\n";
    }
    
    return 0;
}
