#include <stdio.h>
#include <stdlib.h>

//prototipo das fun��es que esta no final do codigo
void imprime_cabec(void);
int multiplica(int n1, int n2);


int main(void)
{
    int v1, v2, resultado;

    imprime_cabec();// chamada da fun��o vazia

    printf("Digite o primeiro numero: ");
    scanf("%d", &v1);
    printf("Digite o segundo numero: ");
    scanf("%d", &v2);

    resultado = multiplica(v1, v2);// chamada da fun��o

    printf("Resultado = %d\n", resultado);

    imprime_cabec();// chamada da fun��o vazia
    return 0;
}
void imprime_cabec(void){
    printf("********************************\n");
    printf("*****      LINGUAEM C     ******\n");
    printf("********************************\n");
    return;
}


int multiplica(int n1, int n2){
    int res;
    res = n1*n2;
    return res;
}
