#include <stdio.h>

int main()
{
    int n1, n2, soma;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    if(soma>20)
    {
        soma = soma + 8;
    }
    else if (soma<= 20)
    {
        soma = soma - 5;
    }
    printf("\nConsiderando as condicoes, a soma sera de: %d", soma);
    return 0;
}
