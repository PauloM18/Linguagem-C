#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL,"portuguese_brazil");
    int ch[15];
    int valor[15], i = 0;

//Ponteiro para o arquivo.
    FILE *pontArq;

//Abertura do arquivo.
    pontArq = fopen("binario.bin","rb");

//Testano se foi aberto com sucesso.
if(pontArq != NULL)

    printf("\n\nArquivo binario.bin foi aberto com sucesso!\n");

else{
    printf("\n\nErro: O arquivo binario.bin n�o foi aberto e criado\n");
    system("pause");
    exit(1);
}

//Leitura do arquivo binario
//Sintaxe: fread(&variavel, num_bytes, num_registros,arquivo);

//Retorna o conteúdo contido em uma ocorrência do tamanho da variável ch.
    fread(ch, sizeof(ch), 1, pontArq);

//Retorna o conteúdo contido em uma ocorrência do tamanho da variável valor.
    fread(valor, sizeof(valor), 1, pontArq);

printf("Verto de caracteres: \n");

for(i = 0; i < 15; i++){

    printf("%c", ch[i]);
}

printf("\nVerto de inteiros: \n");

for(i = 0; i < 15; i++){

    printf("\n%d", valor[i]);
}
// Fechar arquivo
    fclose(pontArq);
    printf("\n");
    system("pause");
    return 0;
}