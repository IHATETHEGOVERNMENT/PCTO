#include <stdio.h>

int main (){

    int a; 
    int b;
    printf("a quanti anni puoi prendere la patente nel tuo paese?\n");
    scanf("%d",&a);
    printf("quanti anni hai?\n");
    scanf("%d",&b);
if (a<=b) {
 printf("puoi prendere la patente\n");
 } else if (a>b) {
 printf("non puoi prendere la patente\n");
 }
return(0);
} 