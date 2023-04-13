#include <stdio.h>
#include <stdlib.h>

struct tp_endereco{

    char rua[40];
    int numero;
    char bairro[40];
    char cidade[40];
    char estado[40];
    int cep;
};

struct tp_data_nascimento{

    int dia;
    int mes;
    int ano;
};

struct cadastro_cliente{

    char nome_cliente[40];
    int telefone;

    struct tp_endereco endereco;
    struct tp_data_nascimento data_nascimento;
} cad_cliente[2];

int main(void)
{
    int i;

    printf("\n\n---------------------Cadastro de Clientes-----------------\n\n");

    //armazenando os dados do cadastro da structt cad_cliente
    for(i = 0; i < 2; i++){

        printf("\n\nNome do cliente................: ");
        fflush(stdin);
        gets(cad_cliente[i].nome_cliente);

        printf("\nDigite o telefone do cliente.....: ");
        scanf("%d", &cad_cliente[i].telefone);

        printf("\nDigite a rua.....................: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.rua);

        printf("\nDigite o numero..................: ");
        scanf("%d", &cad_cliente[i].endereco.numero);

        printf("\nDigite o nome do bairro..........: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.bairro);

        printf("\nDigite nome da cidade............: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.cidade);

        printf("\nDigite o nome do estado..........: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.estado);

        printf("\nDigite o CEP.....................: ");
        scanf("%d", &cad_cliente[i].endereco.cep);

        printf("\nDia de nascimento................: ");
        scanf("%d", &cad_cliente[i].data_nascimento.dia);

        printf("\nMes de nascimento................: ");
        scanf("%d", &cad_cliente[i].data_nascimento.mes);

        printf("\nAno de nascimento................: ");
        scanf("%d", &cad_cliente[i].data_nascimento.ano);
    }

    printf("\n\n-----------------------Dados do Cliente--------------------");

    for(i = 0; i < 2; i++){

        printf("\n Nome...............: %s", cad_cliente[i].nome_cliente);
        printf("\n Rua................: %s", cad_cliente[i].endereco.rua);
        printf("\n Numero.............: %d", cad_cliente[i].endereco.numero);
        printf("\n Bairro.............: %s", cad_cliente[i].endereco.bairro);
        printf("\n Cidade.............: %s", cad_cliente[i].endereco.cidade);
        printf("\n Estado.............: %s", cad_cliente[i].endereco.estado);
        printf("\n CEP................: %d", cad_cliente[i].endereco.cep);

        printf("\n Dia de nascimento..: %d", cad_cliente[i].data_nascimento.dia);
        printf("\n Mes de nascimento..: %d", cad_cliente[i].data_nascimento.mes);
        printf("\n Ano de nascimento..: %d\n", cad_cliente[i].data_nascimento.ano);
    }
    system("pause");
    return 0;
}
