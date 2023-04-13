#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3], l, c, m;
    printf("Digite o valor para o elementos da matriz\n\n");

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("\nElemento[%d][%d] = ", l,c);
            scanf("%d", &matriz[l][c]);
        }
    }
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("\nElemento[%d][%d] = %d\n", l,c, matriz[l][c]);
        }
    }
    system("pause");
    return 0;
}
