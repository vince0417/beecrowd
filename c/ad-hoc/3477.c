//Baú Danificado
#include <stdio.h>

int main ()
{
    int hipo, catetoOp, catetoAj;
    scanf("%d %d %d", &hipo, &catetoOp, &catetoAj);

    int aux1 = (hipo*hipo);
    int aux2 = (catetoOp*catetoOp) + (catetoAj*catetoAj);

    if (aux1 != aux2) printf("Nao eh retangulo!\n");
    else {
        double semiRaio = (double)catetoAj/2.0;
        double semiCircu = 3.0*(semiRaio*semiRaio);
        printf("AREA = %i\n", (int)(semiCircu + (catetoAj*catetoOp))/2);
    }
    return 0;
}
