#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    /*
    char str1[] = "abd";
    char str2[] = "abd";
    int retorno;;

    retorno = strcmp(str1, str2);

        //0: conteudo das string for igual
        //< 0: conteudo da str1 é menor do que str2
        //> 0: conteudo da str1 e maior do que str2

    printf("retorno = %d \n", retorno);
    */


    char str1[15]="Curso de C";
    char str2[15]="Curso de java";
    int retorno;

    retorno = strncmp(str1,str2,10);
    /*
        0: conteudo das string for igual
        < 0: conteudo da str1 é menor do que str2
        > 0: conteudo da str1 e maior do que str2
    */
    printf("retorno = %d \n", retorno);
    return 0;
}
