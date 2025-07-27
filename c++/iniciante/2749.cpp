//Saída 3
#include  <bits/stdc++.h>
using namespace std;

int main()
{
    cout <<"---------------------------------------\n";
    for (int i = 1; i <= 5; i++)
    {
        for (int x = 1; x <= 39; x++)
        {
            if (x == 1 or x == 39) cout << "|";
            else if (i == 1 and x == 2){
                cout << "x = 35";
                x+=5;
            }
            else if (i == 3 and x == 17){
                cout << "x = 35";
                x+=5;
            }
            else if (i == 5 and x == 33){
                cout << "x = 35";
                x+=5;
            }else cout << " ";

        }
        cout << "\n";
    }
    cout <<"---------------------------------------\n";
    return 0;
}
