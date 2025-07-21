//Tradutor do Papai Noel
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, string> idiomas{{"brasil","Feliz Natal!"},
    {"alemanha", "Frohliche Weihnachten!"},
    {"austria","Frohe Weihnacht!"},
    {"coreia","Chuk Sung Tan!"},
    {"espanha","Feliz Navidad!"},
    {"grecia","Kala Christougena!"},
    {"estados-unidos","Merry Christmas!"},
    {"inglaterra","Merry Christmas!"},
    {"australia","Merry Christmas!"},
    {"portugal","Feliz Natal!"},
    {"suecia","God Jul!"},
    {"turquia","Mutlu Noeller"},
    {"argentina","Feliz Navidad!"},
    {"chile","Feliz Navidad!"},
    {"mexico","Feliz Navidad!"},
    {"antardida","Merry Christmas!"},
    {"canada","Merry Christmas!"},
    {"irlanda","Nollaig Shona Dhuit!"},
    {"belgica","Zalig Kerstfeest!"},
    {"italia","Buon Natale!"},
    {"libia","Buon Natale!"},
    {"siria","Milad Mubarak!"},
    {"marrocos","Milad Mubarak!"},
    {"japao","Merii Kurisumasu!"}};

    string pais{};
    while (cin >> pais)
    {
        int error{};
        auto it{idiomas.begin()}; 
        for (; it != idiomas.end(); it++){
            if (pais == it->first){
                cout << it->second << "\n";
                error++;
                break;
            }
        }
        if (error == 0) cout << "--- NOT FOUND ---\n";
    }
    
    return 0;
}
