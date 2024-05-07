//Grupo de Trabalho do Noel
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string elfo, grupo, servo {'b','a','m','d'};
    vector<int> aux(4), vetor {8,4,6,12}, nhp(3);
    
    cin >> nhp.at(0);
    for (int i = 0; i < nhp.at(0); i++)
    {
        cin >> elfo >> grupo >> nhp.at(1);
        for (int id = 0; id < 4; id++) 
        {
            if (grupo.at(0) == servo.at(id)) aux.at(id) += nhp.at(1);
        }        
    }

    for (int i = 0; i < 4; i++) nhp.at(2) += aux.at(i)/vetor.at(i); 
    cout << nhp.at(2) << endl;
    return 0;
}
