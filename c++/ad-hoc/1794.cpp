//Lavanderia
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int la, lb, sa, sb;
    cin >> la >> lb >> sa >> sb;

    if (num >= la and num <= lb and
        num >= sa and num <= sb) cout << "possivel\n";
    else cout << "impossivel\n";

    return 0;
}
