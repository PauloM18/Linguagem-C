#include <stdio.h>
#include <stdlib.h>

/*tipo_de_retorno nome_da_fun��o(listagem do paramentro){
    instru��es;
    retorno_da_fun��o;
}
*/
int multiplica(int n1, int n2){
    int res;
    res = n1*n2;
    return res;
}
int main(void)
{
    int v1, v2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &v1);
    printf("Digite o segundo numero: ");
    scanf("%d", &v2);

    resultado = multiplica(v1, v2);// chamada da fun��o

    printf("Resultado = %d\n", resultado);
    return 0;
}
