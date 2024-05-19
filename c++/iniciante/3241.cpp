//Ajude um Candidato a PhD!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        string soma;
        string  n1 {}, n2 {};
        cin >> soma;

        if (soma == "P=NP") cout << "skipped\n";
        else{
            int x {0};
            for (int id = 0; id < soma.size(); id++)
            {
                if (soma.at(id) == '+') x = 1;
                if (x == 0) 
                {
                    if (soma.at(id) != '+') n1.push_back(soma.at(id));
                }
                if (x == 1)
                {
                    if (soma.at(id) != '+') n2.push_back(soma.at(id));
                }
            
            }
            
            x = (stoi(n1))+(stoi(n2));
            cout << x << endl;
            if (x == 0) break;
        }
    }
    
    return 0;
}
