#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;//Criando um ponteiro para vetor
    int i, quant_elementos;

    //recebendo a quantidade de elementos
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &quant_elementos);

    //alocando a memoria para o vetor de acordo com a quantidade de elementos do vetor

    p = (int *)(malloc(quant_elementos*sizeof(int)));

    //caso não seja possivel alocar memoria suficiente enviar mensagem e sair do programa com exit (1);
    if(p == NULL){

        printf("Erro de alocação dinamica!");
        system("pause");
        exit(1);

    }

    printf("\n");

    //receber dado para vetor
    for(i = 0; i < quant_elementos; i++){

        printf("Digite o numero para o indice [%d]: ", i);
        scanf("%d",&p[i]);
    }
    printf("\n");

    //percorre o vetor mostrando os valores armazenados
    for(i = 0; i < quant_elementos; i++){

        printf("Valor armazenado no elemento indice [%d] = %d\n", i, p[i]);
    }
    printf("\n");

    //liberar a memoria que foi alocada
    free(p);
    system("pause");
    return 0;
}
