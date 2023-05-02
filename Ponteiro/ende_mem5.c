#include <stdio.h>

int main (void){

    struct horario{
        int *phora;
        int *pminuto;
        int *psegundo;
    };

    struct horario hoje;

    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    hoje.phora = &hora;
    hoje.pminuto = &minuto;
    hoje.psegundo = &segundo;

    printf("Hora - %d\n", *hoje.phora);
    printf("Minuto - %d\n", *hoje.pminuto);
    printf("Segunndo - %d\n", *hoje.psegundo);

    getchar();
    
    return 0;
}