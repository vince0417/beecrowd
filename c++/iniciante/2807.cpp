//Iccanobif
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int num;
    cin >> num;

    vector<int> vetor {1,1};
    for (int i = 1; i < num-1; i++)
    {
        vetor.push_back(vetor.at(i-1)+vetor.at(i));
    }

    for (int i = num-1; i >= 0; i--)
    {
        if (i > 0) cout << vetor.at(i) << " ";
        else cout << vetor.at(i) << endl; 
    }
    
    return 0;
}
