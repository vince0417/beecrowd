//José e a Súmula
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num{};
    cin >> num;

    string momento{};
    int cont{1}, tempo{};
    do
    {
        cin >> tempo >> momento;
        if (momento == "1T")
        {
            if (tempo <= 45) cout << tempo << "\n";
            else cout << 45 << "+" << (tempo-45) << "\n";
        }
        else if (momento == "2T")
        {
            if (tempo <= 45) cout << (tempo+45) << "\n";
            else cout << 90 << "+" << (tempo+45) - 90 << "\n";
        }
        cont++;
    } while (cont <= num);
    
    return 0;
}
