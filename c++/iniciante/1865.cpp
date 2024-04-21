//Mjölnir
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        string nome;
        int forca;
        cin >> nome >> forca;
        if (nome == "Thor" or nome == "thor" and forca == 50)
        {
            cout << "Y\n";
        }
        else
            cout << "N\n";
        
    }
    
    return 0;
}
