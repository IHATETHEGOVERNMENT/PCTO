#include <stdio.h>

int main (){
    int a; 

        printf("in che anno sei nato?\n");
        scanf("%d",&a);
    if (a==1969){
        printf("sei nato lo stesso anno dell'allunaggio\n");
    }   
    if (a>1969){
        printf("sei nato %d anni dopo l'allunaggio\n", a-1969);
    }   
    if (a<1969){
        printf("sei nato %d anni prima dell'allunaggio\n", 1969-a);
    }
    return(0);
}