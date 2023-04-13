#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ponteiro;
     int r;
     char texto[50];

     //abrindo o arquivo para gravação
     ponteiro = fopen("arquivo.txt","w");

     //testando a abertura do arquivo
     if(ponteiro == NULL){

        printf("Erro ao tentar abrir o arquivo!\n");
        exit(1);
     }

     //gravando strings no arquivo
     r = fputs("programando em Linguagem C.", ponteiro);

     //verificando se os dados fora gravados com sucesso

     if(r == EOF){

        printf("Erro ao tentar gravar os dados!\n");
     }
     else{

        printf("Dados gravados com sucesso! \n");
     }

     //fechando o arquivo
     fclose(ponteiro);

     printf("\nLeitura dos dados gravados no arquivo \n");

     ponteiro = fopen("arquivo.txt","r");

     while(fgets(texto,50,ponteiro) != NULL){

        printf("\n%s\n",texto);
     }
     fclose(ponteiro);
     printf("\n");
     system("pause");
    return 0;
}
