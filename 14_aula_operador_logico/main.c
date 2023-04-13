#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL,"portuguese");
    float nota_final, frequencia;

    printf("Digite a nota final do aulo: ");
    scanf("%f", &nota_final);

    printf("Digite e frequancia do aulo: ");
    scanf("%f", &frequencia);

    if(nota_final >= 6.0 && frequencia >= 75)
        printf("Aluno aprovado \n");
    else
        printf("Aluno reprovado \n");

    return 0;
}
