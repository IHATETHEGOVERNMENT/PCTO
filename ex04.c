#include <stdio.h>

double main (){

    double numero;

    printf("cifra in km:\n");
    scanf("%lf",&numero);
    double moltiplicazione = numero * 1.6;
    printf("cifra in miglia: %lf\n" ,moltiplicazione );

    return(0);
}