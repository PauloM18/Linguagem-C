#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"portuguese");
    int x;
    x = 10;

    int *ponterio;

    ponterio = &x;

    //usando * na declaração vai mostrar o valor que esta no endereço de memoria.
    printf("%d\n", *ponterio);

    //Declarando sem * vai mostra o endereço de memoria.
    printf("%d\n", ponterio);

    getchar();

    return 0;
}