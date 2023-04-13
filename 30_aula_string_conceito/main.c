#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    /*
    //char nome_cliente[7] = "FULANO";
    char nome_cliente[ ] = "FULANO";
    int i;
    for (i = 0; i < 6; i++){
        printf("O valor do elemento %d da string = %c\n", i, nome_cliente[i]);

    */
    /*char nome_cliente[ ] = "FULANO";
    int i;
    nome_cliente[3] = '\0';
    for (i = 0; nome_cliente[i] != '\0'; i++){
        printf("O valor do elemento %d da string = %c\n", i, nome_cliente[i]);
    */

    char nome_cliente[50] = "FULANO DE TAL";
    int i;
    int cont = 0;
    for (i = 0; nome_cliente[i] != '\0'; i++){
        printf("O valor do elemento %d da string = %c\n", i, nome_cliente[i]);
        cont++;
    }
        printf("Quantidade de caracteres da string: %d \n",cont);
        printf("Quantidade de caracteres da string usando strlen: %d \n",strlen(nome_cliente));

    return 0;
}
