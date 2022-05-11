#include <stdio.h>

int main()
{
    char nome[35];
    int vendas;
    float salario;
    vendas = 0;

    printf("Nome do vendedor: ");
    scanf("%s", &nome);
    fflush(stdin);

    printf("\nDigite o total de vendas efetuadas neste mes: ");
    scanf("%d", &vendas);

    salario = vendas+(vendas*0.15);
    printf("O salario do vendedor %s com a comissao sera de %.2f", nome, salario);
    return 0;
}
