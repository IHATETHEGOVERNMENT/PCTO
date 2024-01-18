#include <stdio.h>

int main (){

        int a; 

        printf("in che anno sei nato?\n");
        scanf("%d",&a);
    if (a==1969){
        printf("sei nato lo stesso anno dell'allunaggio\n");
    } 
    if (a>1969) {
        printf("sei nato %d" , a-1969);printf(" dopo l'allunaggio\n");
    }
    if (a<1969){
        printf("sei nato %d" , 1969-a);printf(" prima dell'allunaggio\n");
    }
    return(0);
}