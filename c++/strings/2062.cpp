//OBI URI
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num{};
    cin >> num;

    string palavra{};
    for (int i {1}; i <= num; i++)
    {
        cin >> palavra;
        if (palavra.size() == 3)
        {
            if (palavra.at(0) == 'U' and palavra.at(1) == 'R') palavra.at(2) = 'I';
            if (palavra.at(0) == 'O' and palavra.at(1) == 'B') palavra.at(2) = 'I';
        }

        if (i == num) cout << palavra << "\n";
        else cout << palavra << " ";
    }
    
    return 0;
}
