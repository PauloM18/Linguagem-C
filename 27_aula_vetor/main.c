/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[5]={7,8,9.5,6,4.6};
    int i;

    for(i = 0; i <= 4; i++){

        printf("Vetor[%d] recebe nota: %.2f\n",i, notas[i]);

    }
    system("pause");
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main() {
   int cub[5][5][5];
   int i,j,k;
   for(i = 0; i <=4; i++){
       printf("[%d]",i);
       for(j = 0; j <=4; j++){
           printf("[%d]",j);
           for(k = 0; k <=4; k++){
               printf("[%d]",k);
               cub[i][j][k] = 0;
           }
       }
   }

    system("pause");
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
int main() {

    float notas[4];
    int i;
    for(i = 0; i <= 3; i++){

        printf("Digite a nota do aluno: ");
        scanf("%f", &notas[i]);
    }
    for(i = 0; i <= 3; i++){

        printf("Valor da nota %d: %.2f \n", i, notas[i]);
    }

    return 0;
}

