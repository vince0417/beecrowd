//Mês
#include <iostream>
#include <vector>

using namespace std;

int main () {
    int mes;
    vector<string> ano {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cin >> mes;
    cout << ano[mes-1] << endl;

    return 0;
}
