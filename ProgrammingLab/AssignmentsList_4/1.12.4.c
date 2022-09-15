/* Um comerciante deseja fazer o levantamento do lucro de mercadorias
  que ele comercializa. Para isto,mandou digitar uma linha para cada mercadoria com
  o nome, preço de compra e preço de vendas das mesmas. Fazer um algoritmo que:
  determine e escreva quantas mercadorias proporcionam:
  10% lucro <= 10%: lucro <= 20%; lucro > 20%
  determine e escreva o valor total de compra e de venda de todas as mercadorias, assim como o lucro total.
  Observação: o aluno deve adotar um flag.
*/

#include <stdio.h>

int main()
{
    char nome[25];
    float compra, venda, plucro, receita, precom, preven, menor, entre, maior;
    int flag;

    flag = -1;
    precom = 0;
    preven = 0;
    compra = 0;
    venda = 0;
    plucro = 0;

    menor = 0; // lucro menor que 10%
    entre = 0; // lucro entre 10% e 20%
    maior = 0; // lucro maior que 20%

    do
    {
        printf("\nDigite o nome do produto: ");
        scanf("%s", nome); // tive que usar "%s" porque usando "%c" tava entrando num loop infinito
        fflush(stdin);

        printf("\nDigite o preco de compra desse produto: R$");
        scanf("%f", &precom);
        compra = compra + precom;

        printf("\nDigite o preco de venda desse produto: R$");
        scanf("%f", &preven);
        venda = venda + preven;

        plucro = (preven-precom)/precom;

        // Porcentagem de lucro:
        if (plucro < 0.1)
        {
            menor ++;
        }
        if ((0.1 <= plucro) && (plucro <= 0.2))
        {
            entre ++;
        }
        if (plucro > 0.2)
        {
            maior ++;
        }

        printf("\nDigite 1 para continuar ou 0 para parar: ");
        scanf("%d", &flag);

        receita = venda - compra;

        if (flag != 1 && flag !=0)
        {
            printf("ERRO");
            return 0;
        }
    }
    while (flag != 0);

    printf("\nPorcentagem de lucro: %.2f", plucro*100);

    printf("\n%.0f mercadorias com lucro menor que 10 por cento", menor);
    printf("\n%.0f mercadorias com lucro entre 10 e 20 por cento", entre);
    printf("\n%.0f mercadorias com lucro maior que 20 por cento", maior);

    printf("\nO valor total de compra foi de: R$ %.2f", compra);
    printf("\nO valor total de venda foi de: R$ %.2f", venda);
    printf("\nA receita final sera de: R$ %.2f", receita);

    return 0;
}
