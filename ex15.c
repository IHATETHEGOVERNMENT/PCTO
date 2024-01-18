#include <stdio.h>

void calcolaCubo(){
    int nummeroo;
    int cubo;

    printf("quanto te serve bro?\n");
    scanf("%d", &nummeroo);
    cubo = nummeroo * nummeroo * nummeroo;
    printf("ok damme %d patate e %d euro\n",nummeroo, cubo);
}

int main() {
    calcolaCubo();
    calcolaCubo();
    calcolaCubo();
    calcolaCubo();
    return(0);
}