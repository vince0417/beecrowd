//System of a Download
#include <stdio.h>
#include <string.h>

int main() {
    char musicas[11][15] = {"PROXYCITY","P.Y.N.G.","DNSUEY!","SERVERS","HOST!",
    "CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};
    int num;
    scanf("%i", &num);
    for (size_t i = 0; i < num; ++i)
    {
        int n1, n2;
        scanf("%d%d", &n1, &n2);
        printf("%s\n",musicas[n1+n2]);
    }
    return 0;
}
