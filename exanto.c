#include <stdio.h>
        
int main() {
    float a;
    float b;
    int n;
    n = 0;

    printf("\33[34mDammi un numero\n");
    scanf(" %f", &a); 

    while (a >= 0 && b >= 0) 
    {   
        a = a + b;
        n = n + 1;
        printf("\33[34mla dimme du nummeri\n", a / n);
        printf("\33[34mDammi un numero\n");
        scanf(" %f", &b);        
    }
  
    return 0;
}