#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
    char ch[15] = "Teste geral";
    int valor[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    
    //pomteiro para o arquivo
    FILE *pontArq;

    //Abertura de arquivo
    pontArq = fopen("binario.bin","wb");

    if(pontArq != NULL)
    {
        
        printf("Arquivo criado com sucesso!\n");

    }
    else{

        printf("\n\nErro: O arquivo binario.bin não foi aberto\n");
        system("pause");
        exit(1);

    }
    /*
        Gravando os dados no arquivo usando a função fwrite
        Sintaxe: fwrite(&variavel, numero_de_bytes, num_registro, arquivo);
    */
    fwrite(ch,sizeof(char),15,pontArq);
    fwrite(valor,sizeof(int),15,pontArq);

    fclose(pontArq);
    
    system("pause");
    return 0;
}