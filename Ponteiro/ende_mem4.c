#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"portuguese");
    struct horario{
    int hora;
    int minutos;
    int segundos;
    };

    struct horario agora, *depois;
    depois = &agora;
    //Uma das maneiras de acessar o valor de ponteiro com estrura e usar (devido a ordem de precedencia).
    (*depois).hora= 20;
    (*depois).minutos= 20;
    (*depois).segundos= 20;
    printf("%d: %d: %d\n", agora.hora, agora.minutos, agora.segundos);

    //Ou usar -> seta.
    depois -> hora = 20;
    depois -> minutos = 20;
    depois -> segundos= 20;
    printf("%d: %d: %d\n", agora.hora, agora.minutos, agora.segundos);
    
    int somatorio  = 100;
    struct horario antes;
    antes.hora = somatorio + depois->segundos;
    antes.minutos = agora.hora + depois->minutos;
    antes.segundos = depois->minutos + depois->segundos;

    printf("%d: %d: %d", antes.hora, antes.minutos, antes.segundos);
    getchar();
    return 0;
}