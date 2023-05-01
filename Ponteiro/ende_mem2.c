#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"portuguese");
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    printf("Endereço de X = %d - Valor de X = %d\n", pX, *pX);
    printf("Endereço de Y = %d - Valor de Y = %f\n", pY, *pY);
    printf("Endereço de Z = %d - Valor de Z = %c\n", pZ, *pZ);

    double soma = *pX + *pY;

    printf("Valor da soma: %f\n", soma);
    getchar();
    return 0;
}