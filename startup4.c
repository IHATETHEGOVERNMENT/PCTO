#include <stdio.h>

void none(){
    int chiamalo;
    printf("Lo vuoi contattare??\n1=Si\n2=No\n");
    scanf("%d", &chiamalo);
    if(chiamalo == 1){
        printf("Ecco a te il numero:\n3487239946\n\n\n");
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

    char lavoro;
    int occupazione;
    int ingegnere;
    int informatico;
    int avvocato;
    int siono;
    siono = 1;

    while(siono == 1){
        printf("A che ambito di lavoro sei interessato?\n1:Ingegneria\n2:Informatica\n3:Giurisprudenza\n");
        scanf("%c", &lavoro);
        
        if(lavoro == '1')
        {
            printf("Hai la possibilità di scegliere tra questi nostri ingegneri:\n1:Homer Simpson\n2:Barney Stinson\n3:Lupo Lucio\n\n");
            scanf("%d", & ingegnere);
            if(ingegnere == 1){
                printf("Homer Simpson\n40 anni\nPunteggio: 52 punti\nIn classifica: secondo\nOccupazione attuale: non lavora\n\n");
                none();
            }else if(ingegnere == 2){
                printf("Barney Stinson\n24 anni\nPunteggio: 69 punti\nIn classifica: primo\nOccupazione attuale: lavora\n\n");
                occupato();
            

            }else if(ingegnere == 3){
                printf("Lupo Lucio\n24 anni\nPunteggio: 30 punti\nIn classifica: terzo\nOccupazione attuale: lavora\n\n");
                occupato();
            

            }
        }
        else if(lavoro == '2')
        {
            printf("Hai la possibilità di scegliere tra questi nostri informatici:\n1:Barbie Stereotipo\n2:Ken Ebbasta\n3:Walter White\n\n");
            scanf("%d", & informatico);
            if(informatico == 1){
                printf("Barbie Stereotipo\n20 anni\nPunteggio: 73 punti\nIn classifica: primo\nOccupazione attuale: lavora\n\n");
                occupato();
            }else if(informatico == 2){
                printf("Ken Ebbasta\n23 anni\nPunteggio: 41 punti\nIn classifica: secondo\nOccupazione attuale: non lavora\n\n");
                none();
            }else if(informatico == 3){
                printf("Walter White\n23 anni\nPunteggio: 2 punti\nIn classifica: terzo\nOccupazione attuale: non lavora\n\n");
                none();
            }
        }
        else if(lavoro == '3')
        {
            printf("Hai la possibilità di scegliere tra questi nostri avvocati:\n1:Bojack Horseman\n2:Harvey Specter\n3:Rachel Green\n\n");
            scanf("%d", & avvocato);
            if(avvocato == 1){
                printf("Bojack Horseman\n56 anni\nPunteggio: 55 punti\nIn classifica: secondo\nOccupazione attuale: non lavora\n");
                none();
            }else if(avvocato == 2){
                printf("Harvey Specter\n23 anni\nPunteggio: 98 punti\nIn classifica: primo\nOccupazione attuale: lavora\n");
                occupato();
            }else if(avvocato == 3){
                printf("Rachel Green\n23 anni\nPunteggio: 4 punti\nIn classifica: terzo\nOccupazione attuale: lavora\n");
                occupato();
            }
        }
        

        
        printf("Vuoi continuare a usufruire dei nostri servizi?\n1=si\n2=no\n");
        scanf("%d", &siono);
    }
    printf("E allora vai a farti fottere\n");
}