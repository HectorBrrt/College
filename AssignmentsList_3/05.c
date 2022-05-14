#include <stdio.h>

int main()
{
    float nota;
    int f;
    nota = 0;
    f = 0;

    printf("Informe sua frequencia (0 - 100) e nota (0.0 - 10.0)\n");

    printf("Digite sua porcentagem de frequencia:");
    scanf("%d", &f);

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if((f<75) || (nota<3))
    {
        printf("\nReprovado.");
    }

    else if((f>=75) && (nota>=3) && (nota<=7))
    {
        printf("\nExame.");
    }

    else if((f>=75) && (nota>=7) && (nota<=10))
    {
        printf("\nAprovado.");
    }
}
