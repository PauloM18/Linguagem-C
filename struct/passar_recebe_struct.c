#include <stdio.h>

struct horario
{
    int horas;
    int minutos;
    int segundo;
};

int main(void){
    struct horario teste(struct horario x);

    struct horario agora;
    agora.horas = 10;
    agora.minutos = 42;
    agora.segundo = 58;

    struct horario proxima;
    proxima = teste(agora);

    printf("%d:%d:%d\n", proxima.horas, proxima.minutos, proxima.segundo);

    system ("pause");
    return 0;
}

struct horario teste(struct horario x){
    
    printf("%d:%d:%d\n", x.horas, x.minutos,x.segundo);

    x.horas = 100;
    x.minutos = 100;
    x.segundo = 100;

    return x;
};

