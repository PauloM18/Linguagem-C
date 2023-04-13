#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(viod)
{
    setlocale(LC_ALL,"portuguese");
    int num;
    num = 10;
    printf("Valor inicial de num = %d \n", num);

    num += 5; //equivale a fazer num = num + 5;
    printf("Somando 5 ao valor inicial tem num = %d \n", num);

    num -= 1; //equivale a fazer num = num - 1;
    printf("subtrairndo 1 temos num = %d \n", num);

    num *= 2; //equivale a fazer num = num * 2;
    printf("Multiplicação por 2 temos num = %d \n", num);

    num /= 7; //equivale a fazer num = num / 7;
    printf("Divisão por 7 temos num = %d \n", num);
    return 0;
}
