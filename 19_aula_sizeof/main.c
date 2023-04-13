#include <stdio.h>
#include <stdlib.h>

/*struct ponto{
    int x, y;
};
int main()
{
    printf("Tamanho char: %d\n", sizeof(char));
    printf("Tamanho int: %d\n", sizeof(int));
    printf("Tamanho float: %d\n", sizeof(float));
    printf("Tamanho double: %d\n", sizeof(double));
    printf("Tamanho struct ponto: %d\n", sizeof(struct ponto));

    int x;
    double y;

    printf("Tamnaho da variavel X: %d\n", sizeof x);
    printf("Tamanho da variavel Y: %d\n", sizeof y);*/

int main (void){
        float vtexte;
        printf(" --- TIPO ---|--- BYTES ---\n");
        printf(" char .......: %d bytes\n", sizeof(char));
        printf(" short ......: %d bytes\n", sizeof(short));
        printf(" int ........: %d bytes\n", sizeof(int));
        printf(" long .......: %d bytes\n", sizeof(long));
        printf(" float ......: %d bytes\n", sizeof(float));
        printf(" double .....: %d bytes\n", sizeof(double));
        printf(" long double.: %d bytes\n", sizeof(long double));
        printf("\nO tamanho de vteste e...: %d \n\n", sizeof vtexte);

    system("pause");
    return 0;
}

   /* system("pause");
    return 0;
}*/

