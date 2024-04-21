//Blobs
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        float supri;
        int dias = 0;
        scanf("%f", &supri);

        while (supri > 1.0)
        {
            supri /= 2;
            dias += 1;
        }
        printf("%d dias\n", dias);
    }
    
    return 0;
}
