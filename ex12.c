#include <stdio.h>
double main(){
    double a;
    double b;
    double c;
printf("seleziona 3 lunghezze dei lati\n");
scanf("%lf %lf %lf", a, b, c);
if((a==b&b!=c)||(a==c&b!=c)||(c==b&b!=a)){
    printf("il triangolo è isoscele\n");
}
else if(a=!b&b!=c){
    printf("il triangolo è scaleno\n");
}
else if(a==b&b==c){
    printf("il triangolo è equilatero\n");
}
}