#include <stdio.h>

int main (){

    int a; 
    printf("quanti anni hai?\n");
    scanf("%d",&a);
if(18<a){
    printf("in italia puoi prendere la patente\n");
} if(16<a){
    printf("negli stati uniti puoi prendere la patente\n");
} if(17<a){
    printf("nel paese delle meraviglie puoi prendere la patente a 17 anni\n");
} if(21<a){
    printf("in un paese brutto puoi prendere la patente a 21 anni\n");
}
    return(0);
}