#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguse");

    // string é uma variavel que armazena uma cadeia de caracteres
    char nome[20];

    /*printf("Digite seu nome: ");
    scanf("%s", &nome); */// para string e opcional coloca & na variavel.

    printf("Digite seu nome: ");
    fgets(nome,20,stdin); // melhor forma para ler strings

    printf("O nome armazenado foi: %s", nome);

    return 0;
}
