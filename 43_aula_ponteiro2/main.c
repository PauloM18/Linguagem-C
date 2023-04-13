#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //inicializando a variavel com zero 0
    int x, *ptrx, **pptrx;
    x = 0;

    printf("valor de x = %d\n", x);
    printf("Endereco de x: %x\n", &x);

    // atribuindo os endereços para os ponteiros
    ptrx = &x; // ptrx aponta para X
    pptrx = &ptrx; // pptrx aponta para ptrx

    *ptrx = *ptrx + 10;
    printf("\nvalor de x = %d\n", x);
    printf("endereco apontado por ptrx: %x\n", ptrx);
    printf("valor da variavel X que esta sendo apontada por ptrx: %d\n", *ptrx);
    printf("Endereco de memoria da variavel ptrx: %x\n", &ptrx);

    **pptrx = *ptrx + 10;
    printf("\nvalor de x = %d\n", x);
    printf("endereco apontado por **pptrx: %x\n", pptrx);
    printf("valor da variavel X que esta sendo apontada por pptrx: %d\n", **pptrx);
    printf("Endereco de memoria da variavel **pptrx: %x\n", &pptrx);

    system ("pause");
    return 0;
}
