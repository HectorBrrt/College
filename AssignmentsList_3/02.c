#include <stdio.h>

int main()
{
    float sb, emp;
    sb = 0;
    emp = 0;

    printf("Digite o salario bruto: ");
    scanf("%f", &sb);

    printf("Digite o valor do emprestimo desejado: ");
    scanf("%f", &emp);

    if (emp > sb * 0.3)
    {
        printf("Emprestimo negado.");
    }
    else
    {
        printf("Emprestimo aprovado.");
    }
    return 0;
}
