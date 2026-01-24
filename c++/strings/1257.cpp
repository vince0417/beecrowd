//Array Hash
#include <bits/stdc++.h>
using namespace std;

void hashSum(int&, int, string); //Protótipo;

int main(){
    int casesT{}; //Casos de teste;
    cin >> casesT;
    for(int c{}; c < casesT; ++c){
        int sum{}, num{};
        cin >> num;
        for(int i{}; i < num; ++i){
            string str;
            cin >> str;
            hashSum(sum, i, str);
        }
        cout << sum << '\n';
    }
    return 0;
}

void hashSum(int& sum, int i, string str)
{
    //Cada letra do alfabeto e sua posição, levando em consideração que inicia em zero;
    map<char,int> alphabet{{'A',0},{'B',1},{'C',2},{'D',3},{'E',4},
        {'F',5},{'G',6},{'H',7},{'I',8},{'J',9},
        {'K',10},{'L',11},{'M',12},{'N',13},{'O',14},
        {'P',15},{'Q',16},{'R',17},{'S',18},{'T',19},
        {'U',20},{'V',21},{'W',22},{'X',23},{'Y',24},{'Z',25}};
    
    //Soma a posição de cada letra no alfabeto à sum;
    for(char it : str) sum += alphabet[it];

    //Soma a posição de cada letra na string e o caso e teste atual à sum;
    for (size_t it{}; it < str.length(); ++it){
        sum += (i+it);
    }
}
