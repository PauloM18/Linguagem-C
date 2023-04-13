#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[10], B[10];
    int i;
    for(i = 0; i < 10; i++){

        printf("%d - Digite os dados para vetor A: ", i);
        scanf("%d", &A[i]);

    }
    printf("Saida de dados do vetor A: \n");
    for(i = 0; i < 10; i++){

        printf("A[%d] = %d\n", i, A[i]);
    }
    printf("Saida de dados do vetor B: \n");
    for(i = 0; i < 10; i++){

        B[i] = A[i] *10;

        printf("B[%d] = %d \n", i, B[i]);
    }

    printf("---------------------------------------\n");
    return 0;
}
