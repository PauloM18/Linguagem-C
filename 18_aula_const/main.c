#include <stdio.h>
#include <stdlib.h>
#define ICMS 0.18; //declar��o da constate
int main(void)
{
    float preco_produto, valor_icms, valor_total;
    const float frete = 10.50;

    printf("Informe o valor do produto: ");
    scanf("%f", &preco_produto);

    valor_icms = preco_produto * ICMS;

    printf("Valor de imposto a ser pago: R$ %.2f\n", valor_icms);

    valor_total = preco_produto + valor_icms + frete;

    printf("Valor total a ser pago: R$ %.2f", valor_total);

    return 0;
}
