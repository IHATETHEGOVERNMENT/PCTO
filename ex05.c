#include <stdio.h>

int main (){

    int a; 
    printf("qual'è il PIL del tuo stato in miliardi di dollari?:\n");
    scanf("%d",&a);
if(a<10){
    printf("your country is in the low tier\n");
} else if(a<200){
    printf("your country is in mid-low tier\n");
} else if(a<999){
    printf("your country is in mid-high tier\n");
} else if(a>1000){
    printf("your country is in high tier\n");
}
    return(0);
}