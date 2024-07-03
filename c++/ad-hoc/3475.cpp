//Conversor
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> tabelaP {"zero","um","dois","tres","quatro","cinco","seis","sete","oito","nove"};
    vector<string> tabelaN {"0","1","2","3","4","5","6","7","8","9"};

    string num;
    cin >> num;

    for (int i {}; i <= 9; i++)
    {
        if (num == tabelaP.at(i)) cout << tabelaN.at(i) << endl;
        if (num == tabelaN.at(i)) cout << tabelaP.at(i) << endl;
    }
    
    return 0;
}
