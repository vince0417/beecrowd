//Preenchimento de Vetor IV
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int num{};
    vector<int> par, impar;
    for (int i = 0; i < 15; i++)
    {
        cin >> num;
        if (num%2 == 0) par.push_back(num);
        else impar.push_back(num);

        if (par.size() == 5){
            for (int it = 0; it < par.size(); it++)
            {
                cout << "par[" << it << "] = " << par.at(it) << "\n";
            }
            par.clear();
        }
        if (impar.size() == 5){
            for (int it = 0; it < impar.size(); it++)
            {
                cout << "impar[" << it << "] = " << impar.at(it) << "\n";
            }
            impar.clear();
        }
    }
    
    if (!impar.empty()){
        for (int it = 0; it < impar.size(); it++)
        {
            cout << "impar[" << it << "] = " << impar.at(it) << "\n";
        }
    }
    if (!par.empty()){
        for (int it = 0; it < par.size(); it++)
        {
            cout << "par[" << it << "] = " << par.at(it) << "\n";
        }
    }

    return 0;
}
