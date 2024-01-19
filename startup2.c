#include <stdio.h>

void none(){
    int chiamalo;
    printf("lo vuoi contattare??\n1=si\n2=no\n");
    scanf("%d", &chiamalo);
    if(chiamalo == 1){
        printf("ecco a te il numero...\n");
    }else if(chiamalo == 2){
        printf("e allora niente\n");
    }
    

}void occupato(){
    int chiamalo;
    printf("lo vuoi contattare comunque??\n1=si\n2=no\n");
    scanf("%d", &chiamalo);
    if(chiamalo == 1){
        printf("ecco a te il numero...\n");
    }else if(chiamalo == 2){
        printf("e allora niente\n");
    }
    }



int main(){

    int lavoro ;
    int occupazione;
    int architetto;
    int informatico;
    int avvocato;
    int siono;
    printf("vuoi usufruire dei nostri servizi??\n1=si\n2=no\n");
    scanf("%d", &siono);
    while(siono == 1){
    printf("a che ambito di lavoro sei interessato?\n1:architetto\n2:informatico\n3:avvocato\n");
    scanf("%d", &lavoro);
    
    if(lavoro == 1){
        printf("questi sono i nostri architetti:\n1:homer simpson\n2:barney stinson\n");
        scanf("%d", & architetto);
        if(architetto == 1){
             printf(" honer simpson 40 anni\npunteggio:52 punti\nin classifica: secondo\noccupazione attuale:none\n");
             none();
             
             
        }else{
             printf("barney 24 anni\npunteggio:69 punti\nin classifica: primo\noccupazione attuale: lavora\n");
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
}
printf("e allora vai a farti fottere che cazzo hai aperto a fare il nostro servizio\n");
}