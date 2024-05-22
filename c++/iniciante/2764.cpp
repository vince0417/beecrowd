//Entrada e Saída de Data
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string data;
    cin >> data;

    cout << data.at(3) << data.at(4) << "/" << data.at(0) << data.at(1) << "/" << data.at(6) << data.at(7) << endl;

    cout << data.at(6) << data.at(7) << "/" << data.at(3) << data.at(4) << "/" << data.at(0) << data.at(1) << endl;

    cout << data.at(0) << data.at(1) << "-" << data.at(3) << data.at(4) << "-" << data.at(6) << data.at(7) << endl;

    return 0;
}
