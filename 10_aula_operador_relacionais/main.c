#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int x = 10, y = 5, z = 7, k = 7;
    printf("Os operados relacionais são usados para fazer coparações\n");
    printf("Quando o resultado da comparação e FALSO retorna 0(zero)\n");
    printf("Quando o resultado da comparação e VERDADEIRO retorna 1\n");

    printf("\nValor de x = %d ", x);
    printf("Valor de y = %d \n", y);
    printf("Valor de z = %d ", z);
    printf("Valor de k = %d \n", k);

    printf("\nExemplo 1: x > y: %d", x > y);
    printf("\nExemplo 2: x < y: %d", x < y);

    printf("\nExemplo 3: z == k: %d", z == k);
    printf("\nExemplo 4: z != k: %d", z != k);

    printf("\nExemplo 5: z >= x: %d", z >= x);
    printf("\nExemplo 6: z <= k: %d", z <= k);
    return 0;
}
