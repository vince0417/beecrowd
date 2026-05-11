//Tempo de um Evento
#include <bits/stdc++.h>
using namespace std;

void cronometro(int, int, vector<int>, vector<int>); // Protótipo;

int main(){
    int diaInicio{}, diaFim{}; // Dia de inicio e fim do evento;
    vector<int> inicio(3), fim(3); // Guarda hora, minuto e segundo de inicio e fim do evento;

    char temp; // usado apenas para ler ':';
    string dia; // Usado apenas para ler "Dia";
    cin >> dia >> diaInicio >> inicio[0] >> temp >> inicio[1] >> temp >> inicio[2]; // Dia de inicio, hora, minuto e segundo;
    cin >> dia >> diaFim >> fim[0] >> temp >> fim[1] >> temp >> fim[2]; // Dia que termina o evento, hora, minuto e segundo;

    cronometro(diaInicio, diaFim, inicio, fim);
    return 0;
}

void cronometro(int diaInicio, int diaFim, vector<int> inicio, vector<int> fim){
    vector<int> tempo(4); // Irá guardar a duração do evento em dia(s), hora(s), minuto(s) e segundo(s);

    while(true){
        if(diaInicio == diaFim && inicio[0] == fim[0] && inicio[1] == fim[1]
            && inicio[2] == fim[2]) break;
        
        inicio[2]++;
        tempo[3]++;

        if(inicio[2] == 60){
            inicio[1] += 1;
            inicio[2] = 0;
        }
        if(inicio[1] == 60){
            inicio[0] += 1;
            inicio[1] = 0;
        }
        if(inicio[0] == 24){
            inicio[0] = 0;
            diaInicio++;
        }

        if(tempo[3] == 60){
            tempo[2] += 1;
            tempo[3] = 0;
        }
        if(tempo[2] == 60){
            tempo[1] += 1;
            tempo[2] = 0;
        }
        if(tempo[1] == 24){
            tempo[0] += 1;
            tempo[1] = 0;
        }
    }

    cout << tempo[0] << " dia(s)\n";
    cout << tempo[1] << " hora(s)\n";
    cout << tempo[2] << " minuto(s)\n";
    cout << tempo[3] << " segundo(s)\n";
}
