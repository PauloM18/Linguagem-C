#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    //valor � a variavel que
    //ser� apontada pelo ponteiro
    int valor = 27;

    //declar��o de variavel ponteiro
    int *ptr;

    //atribuindo o endere�o da variavel valor ao ponteiro
    ptr = &valor;
    printf("utilizando ponteiro\n\n");
    printf("Conteudo da variavel valor: %d\n", valor);
    printf("Endere�o de variavel valor: %x \n", &valor);
    printf("Conteudo da variavel ptr: %x", ptr);

    getch();
    return 0;
}
