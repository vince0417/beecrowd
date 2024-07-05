//Faça mais, mas faça melhor!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;

    vector<string> word {"oposicao","contrariedade"};
    transform(input.begin(), input.end(), input.begin(), ::tolower);
     
    if (input == word.at(0) or input == word.at(1)) cout << "mas\n";
    else cout << "mais\n";
    return 0;
}
