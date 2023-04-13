#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pont_arq;

    pont_arq = fopen("arquivo.txt","a");

    fclose (pont_arq);

    printf("Arquivo foi criado com sucesso!\n");

    system("pause");
    return 0;
}
