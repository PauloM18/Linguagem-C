#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    //valor é a variavel que
    //será apontada pelo ponteiro
    int valor = 27;

    //declarção de variavel ponteiro
    int *ptr;

    //atribuindo o endereço da variavel valor ao ponteiro
    ptr = &valor;
    printf("utilizando ponteiro\n\n");
    printf("Conteudo da variavel valor: %d\n", valor);
    printf("Endereço de variavel valor: %x \n", &valor);
    printf("Conteudo da variavel ptr: %x", ptr);

    getch();
    return 0;
}
