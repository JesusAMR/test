#include <stdio.h>

int main(){
    int nmp,sue,i,med=0,may=0,sut;
    printf("Numero de empleados: \n");
    scanf("%d",&nmp);
    for(i=0;i<nmp;i++){
        printf("Inserte su sueldo a cobrar: \n");
        scanf("%d",&sue);
        if(sue<300)
            med++;
        else
            may++;
        sut=sut+sue;
    }
    printf("Numero de empleados con sueldo entre $100 y $300 son:%d, mayor a $300 son:%d y el importe de sueldos es:%d",med,may,sut);
    return 0;
}