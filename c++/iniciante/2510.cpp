//Batmain
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    cin.ignore();
    for (size_t i {}; i < num; ++i)
    {
        string vilao;
        getline(cin,vilao);
        if (vilao == "Batmain") cout << "N\n";
        else cout << "Y\n";
    }
    return 0;
}

//Batmain já capturou todos os vilões. Confuso, mas ele é a única pessoa que nunca foi capturado por ele;