//Feedback
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    vector<int> membro {1,2,3,4};
    string user [4] = {"Rolien","Naej","Elehcim","Odranoel"};

    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        for (int cont = 0; cont < x; cont++)
        {
            int aux;
            cin >> aux;
            for (int id = 0; id < 4; id++)
            {
                if (aux == membro.at(id))
                {
                    cout << user[id] << endl;
                    break;
                }
            }
            
        }
        
    }
    
    return 0;
}
