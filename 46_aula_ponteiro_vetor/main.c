#include <stdio.h>
#include <stdlib.h>
/*
Para passar um vetor para função usando liguagem C utiliza-se um ponteiro como paramentro da função.
Ao usarmos o ponteiro como paramentro, na realidade estamos passando o endereço inicial do vetor e não os seus elementos
*/

//protótipo da função media
float media(int n, float *vnotas);

int main(void)
{
    float vnotas[10];
    float media_notas;
    int i;

    //leitura das notas
    for(i = 0; i < 10; i++){

        printf("Digite os valores das notas: ");
        scanf("%f", &vnotas[i]);
    }
    //chamada da função
    media_notas = media(10,vnotas);

    printf("\nMedia = %.1f\n", media_notas);

    system("pause");
    return 0;
}
/*
FUNÇÃO PARA CALCULO DA MEDIA
    PARRAMENTROS:
        RECEBE A QUANTIDADE DE ELEMENTOS N
        RECEBE O ENDEREÇO INICIAL DO VETOR NOTAS EM *VNOTAS
    RETORNO:
        RETORNA A MEDIA NA VARIAVEL M
*/
float media(int n, float *vnotas){

    int i;
    float m = 0, soma = 0;

    //fazendo a somatorio das notas
    for(i = 0; i < n; i++){

        soma = soma + vnotas[i];

    // dividindo pela quantidade de elementos N
        m = soma / n;

    //retornando a media
    return m;
    }
}
