#include <stdio.h>

int main()
{
    int a, b, c, d;
    a = b = c = d = 0;

    printf("Digite o valor de A");
    scanf("%d", &a);

    printf("Digite o valor de B");
    scanf("%d", &b);

    printf("Digite o valor de C");
    scanf("%d", &c);

    printf("Digite o valor de D");
    scanf("%d", &d);

    if((b > c) && (d > a) && (c+d > a+b) && (c > 0) && (d > 0) && (a%2 == 0))
    {
        printf("Valores aceitos.");
    }
    else
    {
        printf("Valores nao aceitos.");
    }
}
