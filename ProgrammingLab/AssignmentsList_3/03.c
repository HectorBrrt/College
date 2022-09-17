#include <stdio.h>

int main()
{
    int n1, n2, soma, op;
    n1 = n2 = 0;
    soma = 0;

    printf("Operacoes:\n[1] para adicao\n[2] para subtracao\n[3] para multiplicacao\n[4] para divisao\n");

    printf("\nDigite o primeiro numero:");
    scanf("%d", &n1);

    printf("Digite a operacao:");
    scanf("%d", &op);

    printf("Digite o segundo numero:");
    scanf("%d", &n2);

    if(op == 1)
    {
        soma = n1+n2;
        printf("\n%d + %d = %d", n1, n2, soma);
    }
    else if(op == 2)
    {
        soma = n1-n2;
        printf("\n%d - %d = %d", n1, n2, soma);
    }
    else if(op == 3)
    {
        soma = n1*n2;
        printf("\n%d * %d = %d", n1, n2, soma);
    }
    else if(op == 4)
    {
        soma = n1/n2;
        printf("\n%d / %d = %d", n1, n2, soma);
    }
    else
    {
        printf("\nERRO");
        return 0;
    }
    return 0;
}
