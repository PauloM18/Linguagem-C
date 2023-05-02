#include <stdio.h>
#include <locale.h>
struct lista
{

        int valor;
        struct lista *proximo;
};
struct lista *procurarValor(struct lista *pLista, int valor)
{
    while(pLista != (struct lista*)0){
        if(pLista -> valor == valor){
            return(pLista);
        }else{
            pLista = pLista -> proximo;
        }
    }
    return(struct lista *)0;
};

int main(void){
    setlocale(LC_ALL,"portuguese");
    struct lista *procurarValor(struct lista *pLista, int valor);
    struct lista m1, m2, m3;
    struct lista *resultado, *gancho = &m1;
    int valor;

    m1.valor = 5;
    m2.valor = 10;
    m3.valor = 15;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = 0;
   
    printf("Digite valor da pesquisa: ");
    scanf("%d", &valor);

    resultado = procurarValor(gancho, valor);

    if (resultado == (struct lista*)0)
    {
        printf("Valor não encontrado.\n");

    }else{
        printf("Valor %d encontrado. \n", resultado->valor);
    }
    system("pause");
    return 0;
}