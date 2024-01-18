#include <stdio.h>

void penna(){
        printf("bella fra inserisci i valori dei coefficienti \n");
    scanf("%lf %lf", &x , &y );
    printf("che operazione ce voi svorge? (puoi scegliere tra +, -, /, *)\n");
    scanf(" %c" ,&a);
    if (a=='+')
    {
        somma = x + y;
        printf("il risultato è %lf\n" , somma);
    }
    if (a=='-'){
        sottrazione = x-y;
        printf("il risultato è %lf\n" , sottrazione);
    }
    if (a=='/'){
        divisione = x/y;
        printf("il risultato dell'operazione è %lf\n" , divisione);
    }
    if (a=='*'){
        moltiplicazione = x*y;
        printf("il risultato dell'operazione è %lf\n" , moltiplicazione);
    }
    else {
        printf("cojone ho detto un numero\n");
    }
}
int main(){
    double x;
    double y;
    char a;
    double somma;
    double sottrazione;
    double divisione;
    double moltiplicazione;

    printf("bella fra inserisci i valori dei coefficienti \n");
    scanf("%lf %lf", &x , &y );
    printf("che operazione ce voi svorge? (puoi scegliere tra +, -, /, *)\n");
    scanf(" %c" ,&a);
    if (a=='+')
    {
        somma = x + y;
        printf("il risultato è %lf\n" , somma);
    }
    if (a=='-'){
        sottrazione = x-y;
        printf("il risultato è %lf\n" , sottrazione);
    }
    if (a=='/'){
        divisione = x/y;
        printf("il risultato dell'operazione è %lf\n" , divisione);
    }
    if (a=='*'){
        moltiplicazione = x*y;
        printf("il risultato dell'operazione è %lf\n" , moltiplicazione);
    }
    else {
        printf("cojone ho detto un numero\n");
    }
    return(0);
}
