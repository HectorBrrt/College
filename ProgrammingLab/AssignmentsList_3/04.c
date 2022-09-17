#include <stdio.h>

int main()
{
    int n1, n2, op;
    n1 = n2 = 0;
    op = '\0';

    printf("Operacoes:\n[1] para '>'\n[2] para '<'\n[3] para '='\n[4] para '!='\n");
    printf("\nDigite o primeiro numero:");
    scanf("%d", &n1);

    printf("Digite a operacao:");
    scanf("%d", &op);

    if((op==1) || (op == 2) || (op == 3) || (op == 4))
    {
        printf("Digite o segundo numero:");
        scanf("%d", &n2);

        if(op == 1)
        {
            if(n1>n2)
            {
                printf("Verdadeiro, %d e maior que %d", n1, n2);
            }
            else if(n1<n2)
            {
                printf("Falso, %d e menor que %d", n1, n2);
            }
            else
            {
                printf("Falso, %d e igual a %d", n1, n2);
            }
        }

        else if(op == 2)
        {
            if (n1 < n2)
            {
                printf("%d e menor que %d", n1, n2);
            }
            else if (n1 < n2)
            {
                printf("Falso %d e maior que %d", n1, n2);
            }
            else
            {
                printf("Falso, %d e igual a %d", n1, n2);
            }
        }

        else if(op == 3)
        {
            if (n1 == n2)
            {
                printf("%d e igual a %d", n1, n2);

            }
            else
            {
                printf("Falso, %d e diferente de %d", n1, n2);
            }
        }

        else if(op == 4)
        {
            if (n1 != n2)
            {
                printf("%d e diferente de %d", n1, n2);
            }
            else
            {
                printf("Falso, %d e igual a %d", n1, n2);
            }
        }
    }
    else
    {
        printf("Operacao invalida.");
    }
    return 0;
}
