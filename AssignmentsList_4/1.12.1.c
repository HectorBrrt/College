/* 1.12.1. Fazer um algoritmo que:
* Leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo.
* A última linha, que não entrará nos cálculos, contém o valor de idade igual a zero.
* Calcule e esceva a idade média deste grupo de indivíduos.
*/

#include <stdio.h>

int main()
{
    int idade, soma, qtd, media;
    idade = 1;
    soma = 0;
    qtd = 0;
    media = 0;

    printf("Digite a idade de cada pessoa do grupo:\n");
    while (idade !=0)

    {
        printf("Idade: ");
        scanf("%d", &idade);
        soma = soma+idade;
        qtd = qtd+1;
    }
    media = soma/(qtd-1);
    printf("A media desse grupo sera: %d anos", media);
}
