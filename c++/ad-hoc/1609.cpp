//Contando Carneirinhos
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, cont {};
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        vector<int> todos {};
        int carneiros;
        cin >> carneiros;

        for (int id = 0; id < carneiros; id++)
        {
            int x;
            cin >> x;
            cont++;

            for (int n = 0; n < todos.size(); n++)
            {
               if (todos.at(n) == x)
               {
                    cont--;
                    break;
               } 
               
            }
            todos.push_back(x);
        }
        cout << cont << endl;
        cont = 0;
    }
    
    return 0;
}
