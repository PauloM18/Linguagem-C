#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    /*char variavel[] = "Curso ";
    strcat(variavel,"de C");
    //concatena a string "de C" com o conteudo da string variavel

    printf("variavel = %s", variavel);*/

    char texto[15], texto2[15];

    printf("Digite primeira parte do texto: ");
    fgets(texto, 15, stdin);

    printf("Digite segunda parte do texto2: ");
    fgets(texto2,20, stdin);

    strcat(texto,texto2);

    printf("Texto completo: %s",texto);

    return 0;
}
