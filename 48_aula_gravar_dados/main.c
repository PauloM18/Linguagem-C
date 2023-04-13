#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
    FILE *arquivo;
    char palavra[20];
    arquivo = fopen("arquivo.txt", "w");

    if(arquivo == NULL){

        printf("Erro de abertura de arquivo!");

        return 1;
    }
    else{

        printf("Escreva uma palavra para testa a gravacao do arquivo: ");
        scanf("%s", palavra);

        fprintf(arquivo,"%s ",palavra);

        fclose(arquivo);

        printf("Dados grava do sucesso!");
    }
    getch();
    return 0;
}
