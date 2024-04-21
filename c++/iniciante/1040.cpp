//Média 3
#include <bits/stdc++.h>
using namespace std;

int main() {
    float n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    float media = (2*n1+3*n2+4*n3+1*n4)/10;

    cout.precision(1);
    cout.setf(ios::fixed);

    cout << "Media: " << media << endl;
    if (media >= 7.0)
    {
        cout << "Aluno aprovado.\n";
    }
    else if (media >= 5.0 and media <= 6.9)
    {
        cout << "Aluno em exame.\n";
        float nota;
        cin >> nota;
        cout << "Nota do exame: " << nota << endl;
        float newMedia = (media+nota)/2;
        if (newMedia >= 5.0)
        {
            cout << "Aluno aprovado.\n";
            cout << "Media final: " << newMedia << endl;
        }
        
    }
    else
        cout << "Aluno reprovado.\n";

    return 0;
}
