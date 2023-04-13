#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main(void)
{
    setlocale (LC_ALL, "portuguese");
    char  str[] = "Curso de programação C";
    int tamanho;

    tamanho = strlen(str);

    printf("O tamanho da string vale: %d \n", tamanho);

    return 0;
}
