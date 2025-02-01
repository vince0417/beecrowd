//Animal
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string palavra0{}, palavra1{}, palavra2{};
    cin >> palavra0 >> palavra1 >> palavra2;

    if (palavra0 == "vertebrado")
    {
        if (palavra1 == "ave"){
            if (palavra2 == "carnivoro") cout << "aguia\n";
            else cout << "pomba\n";
        }
        else{
            if (palavra2 == "onivoro") cout << "homem\n";
            else cout << "vaca\n";
        }
    }
    else{
        if (palavra1 == "inseto")
        {
            if (palavra2 == "hematofago") cout << "pulga\n";
            else cout << "lagarta\n";
        }
        else{
            if (palavra2 == "hematofago") cout << "sanguessuga\n";
            else cout << "minhoca\n";
        }
    }

    return 0;
}
