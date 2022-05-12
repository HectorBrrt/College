/* Faça um algoritmo que leia o nome de um vendedor, o seu salário fixo e o valor total de vendas efetuadas
 * por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre total de vendas
 * efetuadas no mês, o algoritmo deve informar salário total do vendedor e seu nome.
 */

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
