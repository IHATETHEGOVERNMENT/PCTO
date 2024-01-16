#include <stdio.h>

int main(){
int a;
    printf("inserire le lunghezze del lato 1\n");
    scanf("%d" ,&a);
int b;
    printf("inserire le lunghezze del lato 2\n");
    scanf("%d" ,&b);
int c;
    printf("inserire le lunghezze del lato 3\n");
    scanf("%d" ,&c);
if(a==b){
    printf("il triangolo è equilatero\n");
}else if(a==b){
        printf("il triangolo è isoscele\n");
}else if(a!=b==c){
    printf("il triangolo è isoscele\n");
}else if(a!=b!=c){
    printf("il triangolo è scaleno");
}
}