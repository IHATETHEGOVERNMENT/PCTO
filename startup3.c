#include <stdio.h>

void none(){
    int chiamalo;
    printf("Lo vuoi contattare??\n1=Si\n2=No\n");
    scanf("%d", &chiamalo);
    if(chiamalo == 1){
        printf("Ecco a te il numero:\n3487239946\n");
    }else if(chiamalo == 2){
        printf("E allora niente\n\n\n");
    }
    

}void occupato(){
    int chiamalo;
    printf("Lo vuoi contattare comunque??\n1=Si\n2=No\n");
    scanf("%d", &chiamalo);
    if(chiamalo == 1){
        printf("Ecco a te il numero:\n3487239946\n");
    }else if(chiamalo == 2){
        printf("E allora niente\n\n\n");
    }
}
int main(){

    int lavoro ;
    int occupazione;
    int architetto;
    int informatico;
    int avvocato;
    int siono;
    siono = 1;

    while(siono == 1){
        printf("A che ambito di lavoro sei interessato?\n1:Architettura\n2:Informatica\n3:Giurisprudenza\n");
        scanf("%d", &lavoro);
    
        if(lavoro == 1){
            printf("Hai la possibilità di scegliere tra questo nostri architetti:\n1:Homer Simpson\n2:Barney Stinson\n");
            scanf("%d", & architetto);
        if(architetto == 1){
             printf("Homer Simpson\n\n40 anni\n\nPunteggio: 52 punti\n\nIn classifica: secondo\n\noccupazione attuale: non lavora\n\n");
             none();
             
             
        }else{
             printf("Barney Stinson\n\n24 anni\n\nPunteggio: 69 punti\n\nIn classifica: primo\n\nOccupazione attuale: lavora\n\n");
             occupato();
        }

    }else if(lavoro == 2){
        printf("questi sono i nostri informatici:\n1:barbie stereotipo\n2:ken ebbasta\n");
        scanf("%d", & informatico);
        if(informatico == 1){
            printf(" barbie20 anni\npunteggio:73 punti\nin classifica: primo\noccupazione attuale: lavora\n");
             occupato();
        }else{
            printf(" ken 23 anni\npunteggio:41 punti\nin classifica: secondo\noccupazione attuale: none\n");
             none();
        }


    }else if(lavoro == 3){
        printf("questi sono i nostri avvocati:\n1:bojack horseman\n2:harvey specter\n");
        scanf("%d", & avvocato);
        if(avvocato == 1){
            printf(" bojack 56 anni\npunteggio:55 punti\nin classifica: secondo\noccupazione attuale: none\n");
             none();
        }else{
           printf("harvey 23 anni\npunteggio:98 punti\nin classifica: primo\noccupazione attuale: lavora\n");
            occupato();
        }
    }
    printf("vuoi continuare a usufruire dei nostri servizi??\n1=si\n2=no\n");
    scanf("%d", &siono);
}
printf("e allora vai a farti fottere\n");
}