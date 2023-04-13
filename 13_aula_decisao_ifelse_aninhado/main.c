#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL,"portuguese");
    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    if(n1 == n2)
        printf("Os números são iguais!");
    else
        if(n1 > n2)
            printf("O maior valor é = %d", n1);
        else
            printf("O maior valor é = %d", n2);
    return 0;
}
