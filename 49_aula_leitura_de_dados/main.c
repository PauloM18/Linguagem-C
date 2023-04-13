#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
    FILE *arquivo;
    char texto[20];

    arquivo = fopen("arquivo.txt","r");

    while(fgets(texto,20,arquivo)!=NULL);
    printf("%s ", texto);

    fclose(arquivo);
    getch();// pausa na tela
    return 0;
}
