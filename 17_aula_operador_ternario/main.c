#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int x, y, z;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    z = x > y ? x : y;

    printf("Maior numero é: %d", z);
    /*
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    numero >= 3 ? numero++ : numero--;

    printf("O novo valor de numero e: %d", numero);
    */

    return 0;
}
