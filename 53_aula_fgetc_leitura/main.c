#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ponteiro;
    char c;
    ponteiro = fopen("arquivo.txt","r");

    if(ponteiro == NULL){

        printf("Erro ao tentar abrir arquivo!\n");
        system("pause");
        exit(1);

    }

    printf("Lendo e exibindo os dados do arquivo \n");

    do{
        c = fgetc(ponteiro);
        printf("%c", c);

    }
    while(c != EOF);

    fclose(ponteiro);
    printf("\n");
    system("pause");
    return 0;
}
