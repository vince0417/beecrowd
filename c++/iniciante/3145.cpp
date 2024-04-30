//Uma Jornada Inesperada
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int anoes, km;
    cin >> anoes >> km;

    cout.precision(2);
    cout.setf(ios::fixed);
    cout << (double)km/(anoes+2) << endl;
    return 0;
}
