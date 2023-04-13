#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *ponte;
    int i;
    char frase[50];
    int tamanho;
    ponte = fopen("arquivo.txt","w");

    if(ponte == NULL){

        printf("Erro ao tentar gravar arquivo!");
        exit(1);
    }

    printf("Digite a frase a ser gravado no arquivo: ");
    gets(frase);

    tamanho = strlen(frase);

    for(i = 0; i < tamanho; i++){

        fputc(frase[i],ponte);
    }
    fclose(ponte);
    system("pause");
    return 0;
}
