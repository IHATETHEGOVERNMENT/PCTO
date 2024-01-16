#include <stdio.h>

double main (){
        printf("inserisci il valore in celsius\n");
    double numero;
     scanf("%lf",&numero);
    if(numero<-273.15) { 
        printf("non puoi inserire un valore minore del valore assoluto\n");
    }
    else if(numero>-273.15) { 
        printf("cifra in celsius:\n");
        printf("cifra in fahrenheit: %lf\n" ,numero*9/5+32);
        printf("cifra in kelvin: %lf\n" ,numero+273.15);
    return(0);
    }
}