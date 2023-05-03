#include <stdio.h>

int main(void){

    int vetor[3] = {1,2,3};
    // int *ponteiro = &vetor[2];
    int *ponteiro = vetor;
    //alterar o valor do ventor no indice 1
    *(ponteiro + 1)  = 10;
    printf("%d", vetor[1]);

    getchar();

    return 0;
}