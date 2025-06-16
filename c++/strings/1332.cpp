//Um-Dois-Três
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int num{};
    cin >> num;

    string palavra{};
    for (int i{1}; i <= num; i++)
    {
        cin >> palavra;
        switch (palavra.size())
        {
        case 5:
            cout << 3 << "\n";
            continue;
        case 3:
            if (palavra.at(0) == 'o' and palavra.at(1) == 'n' ||
                palavra.at(1) == 'n' and palavra.at(2) == 'e' ||
                palavra.at(0) == 'o' and palavra.at(2) == 'e') cout << 1 << "\n";
            else cout << 2 << "\n";
        }
    }
    return 0;
}
