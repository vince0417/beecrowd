//System of a Download
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> musicas{"PROXYCITY","P.Y.N.G.","DNSUEY!","SERVERS","HOST!",
    "CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};
    int num;
    cin >> num;
    for (size_t i {}; i < num; ++i)
    {
        int n1, n2;
        cin >> n1 >> n2;
        cout << musicas.at(n1+n2) << "\n";
    }
    return 0;
}
