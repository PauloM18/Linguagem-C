#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //char nome [15]= "fulano de tal";
    //printf("Nome: %s", nome);

    //char nome [15];
    //strcpy(nome, "fulano de tal");
    //printf("Nome: %s", nome);

    char nome1 [15];
    char nome2 [15];

    printf("Digite seu nome: ");
    fgets(nome1,15, stdin);

    strcpy(nome2, nome1);
    printf("Nome: %s", nome1);
    return 0;
}
