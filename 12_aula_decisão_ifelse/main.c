#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("Digite um numero inteiro: ");
    scanf("%d", &b);

    soma = a+b;
    printf("O valor da soma = %d\n", soma);

    if(soma >= 10){

        printf("O valor da soma e maior que 10 ou igual a 10!\n");
    }
    else{
        printf("O valor da soma e menor que 10!");
    }
    system("pause");
    return 0;
}
