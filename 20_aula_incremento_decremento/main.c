#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 100, y = 10;
    printf("Valor inicial de X: %d \n", x);
    /*
    x++ equivale a fazer x = x + 1;
    ++x equivale a fazer x = x + 1;
    então qual a diferença entra os dois comandos? */
    printf("\n....................... Pos Incremento .......................................\n\n");
    printf("Valor de X na mesma linha do pos incremento: %d \n", x++);//nesta linha vai exibir 100
    printf("Valor de X na linha seguinte ao pos incremento: %d \n", x);//nesta linha vai exibir 101

    printf("\n....................... pre incremento ........................................\n\n");
    printf("Valor de X na mesma linha do pre incremento: %d \n", ++x);//vai exibir 102

    printf("\n....................... Pos decremento .......................................\n\n");
    printf("Valor de X na mesma linha do pos incremento: %d \n", y--);//nesta linha vai exibir 10
    printf("Valor de X na linha seguinte ao pos incremento: %d \n", y);//nesta linha vai exibir 9

    printf("\n....................... pre decremento ........................................\n\n");
    printf("Valor de X na mesma linha do pre incremento: %d \n", --y);//vai exibir 8

    return 0;
}
