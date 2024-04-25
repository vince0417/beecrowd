//Feliz Nataaal!
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<char> feliz {'F','e','l','i','z',' ','n','a','t'};
    string natal {"l!"};
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) feliz.push_back('a');
    for (int i = 0; i < feliz.size(); i++) cout << feliz[i];    
    cout << natal << endl;
    return 0; 
}
