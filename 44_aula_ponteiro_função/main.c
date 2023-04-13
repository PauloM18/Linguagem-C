#include <stdio.h>
#include <stdlib.h>
/*
// FUN��O SEM RETORNO
//fun��o que soma 10 ao valor recebido
void soma10(int x){

    x = x + 10;
    printf("valor de X apos a soma = %d\n",x);
    return;
}

int main(void){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O numero digitado foi: %d\n", numero);

    // chamada da fun��o
    soma10(numero);

    printf("Agora o numero vale: %d \n", numero);
    return 0;
}
*/
/*
// FUN��O COM RETORNO
int soma10(int x){

    x = x + 10;
    return (x);
}

int main(void){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O numero digitado foi: %d\n", numero);

    // chamada da fun��o
    numero = soma10(numero);

    printf("Agora o numero vale: %d \n", numero);
    return 0;
}
*/
//FUUN��O SEM RETORNO COM PONTEIRO
void soma10(int x){

    x = x + 10;
    printf("valor de X apos a soma = %d\n",x);
    return;
}
void soma10p(int *x){

    *x = *x + 10;
    printf("valor de X apos a soma = %d\n",*x);
    return;
}

int main(void){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O numero digitado foi: %d\n", numero);

    // chamada da fun��o
    soma10(numero);
    printf("Agora o numero vale: %d \n", numero);

    //Chamada da fun��o com ponteiro como parametro
    soma10p(&numero);
    printf("Agora o numero vale: %d \n", numero);
    return 0;
}
