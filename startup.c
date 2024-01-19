#include <stdio.h>

void HomerSimpson(){
    printf("40 anni\npunteggio:52 punti\nin classifica: secondo\noccupazione attuale: none\n");
}void barneystinson(){
    printf("24 anni\npunteggio:69 punti\nin classifica: primo\noccupazione attuale: lavora\n");
}void barbiestereotipo(){
    printf("20 anni\npunteggio:73 punti\nin classifica: primo\noccupazione attuale: lavora\n");
}void kenebbasta(){
    printf("23 anni\npunteggio:41 punti\nin classifica: secondo\noccupazione attuale: none\n");
}void bojackhorseman(){
    printf("56 anni\npunteggio:55 punti\nin classifica: secondo\noccupazione attuale: none\n");
}void harveyspecter(){
    printf("23 anni\npunteggio:98 punti\nin classifica: primo\noccupazione attuale: lavora\n");
}


int main(){
    int lavoro ;
    int occupazione;
    int architetto;
    int informatico;
    int avvocato;
    
    printf("a che ambito di lavoro sei interessato?\n1:architetto\n2:informatico\n3:avvocato\n");
    scanf("%d", &lavoro);
    
    if(lavoro == 1){
        printf("questi sono i nostri architetti:\n1:homer simpson\n2:barney stinson\n");
        scanf("%d", & architetto);
        if(architetto == 1){
            HomerSimpson();
        }else{
            barneystinson();
        }

    }else if(lavoro == 2){
        printf("questi sono i nostri informatici:\n1:barbie stereotipo\n2:ken ebbasta\n");
        scanf("%d", & informatico);
        if(informatico == 1){
            barbiestereotipo();
        }else{
            kenebbasta();
        }


    }else if(lavoro == 3){
        printf("questi sono i nostri avvocati:\n1:bojack horseman\n2:harvey specter\n");
        scanf("%d", & avvocato);
        if(avvocato == 1){
            printf("gesu\n");
            bojackhorseman();
        }else{
           harveyspecter();
        }
    }
}