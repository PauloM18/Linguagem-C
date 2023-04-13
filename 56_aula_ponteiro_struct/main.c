#include <stdio.h>
#include <stdlib.h>
typedef struct{

    int matricula;
    float nota;
}tAluno;
int main(void)
{
    //aluno1 e uma struct do tipo tAluno
    tAluno aluno1;

    // pont_aluno é um ponterio do tipo tAluno que recebe o endereço de aluno1
    tAluno *pontAluno = &aluno1;

    aluno1.matricula = 555;
    aluno1.nota = 8.0;

    //primeira forma de declarar
    printf("matricula: %d nota: %.2f\n", aluno1.matricula, aluno1.nota);

    //podemos atribuir ou acessar um valor usando o ponteiro (*pontAluno)
    (*pontAluno).nota = 8.5;

    // exibir dados usando um ponteiro para struct
    printf("matricula: %d nota: %.2f \n",(*pontAluno).matricula, (*pontAluno).nota);

    //pontAluno -> substitui a notação (*pontAluno). de forma mais intuitiva
    //atribuindo um novo valor para a nota usadno pontAluno ->

    pontAluno -> nota = 9.0;

    printf("matricula: %d nota: %.2f \n",pontAluno -> matricula, pontAluno -> nota);



    system("pause");
    return 0;
}
