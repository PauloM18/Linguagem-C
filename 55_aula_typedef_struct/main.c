#include <stdio.h>
#include <stdlib.h>

/*
int main(void)
{
    //redefinição do tipo float como nota
    typedef float nota;

    //declarando as variaveis usando o tipo de dados renomeado

    nota prova1 = 0, prova2 = 0, media = 0;

    printf("Informe a nota da primeira prova: ");
    scanf("%f",&prova1);

    printf("Informe a nota da segunda prova: ");
    scanf("%f", &prova2);

    media = (prova1 + prova2)/2;

    printf("Media do aluno: %.2f\n", media);
    system("pause");
    return 0;
}
*/
typedef float nota;
typedef int inteiro;

struct tAluno{
    //utilizando os tipos redefinidos dentro da struct
    inteiro matricula;
    nota prova1;
    nota prova2;
};
//redefininddo a struct para encurtar o comando na delcação
typedef struct tAluno tAluno;

int main (void){

    /*declaradno a variavel do tipo tAluno
    note que com a redefinição agora não é mais necessario escrever struct tAluno*/
    tAluno aluno;
    float media = 0;

    printf("Informe o numero de matricula: ");
    scanf("%d", &aluno.matricula);

    printf("Informe a nota da primeira prova: ");
    scanf("%f", &aluno.prova1);

    printf("Informe a nota da segunda prova: ");
    scanf("%f", &aluno.prova2);

    media = (aluno.prova1 + aluno.prova2)/2;

    printf("\nMatricula......: %d\n", aluno.matricula);
    printf("Media do aluno...: %.2f\n", media);

    system ("pause");

    return 0;

}
