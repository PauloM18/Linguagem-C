#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    for( ; ; ){

        printf("Cliclo infinito com for \n");

        printf("Digite um numero inteiro: ");
        scanf("%d", &n);

        if(n == 7){
            printf("Saindo do ciclo for \n");
            break;
        }
    }
    printf("Fim do programa!\n");
    return 0;
}
