#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
struct ficha_aluno{
        char nome[40];
        int numero;
        float nota;
};
int main(void)
{
    
    setlocale(LC_ALL, "portuguese_brazil");
    struct ficha_aluno aluno;
    printf("--------------Cadastro do aluno---------------------\n");
    printf("Nome do aluno ......: ");
    fgets(aluno.nome,40,stdin);

    printf("Digite o número do aluno: ");
    scanf("%d", &aluno.numero);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("\n\n-----------Lendo os dados da struct-------------\n");
    printf("Nome...........: %s", aluno.nome);
    printf("Número ........: %d\n", aluno.numero);
    printf("Nota ..........: %.2f\n", aluno.nota);
    system("pause");
    return 0;
}
