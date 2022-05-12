#include <stdio.h>
#include <math.h>

int main()
{
    int cat1, cat2, hip;
    cat1 = 0;
    cat2 = 0;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%d", &cat1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%d", &cat2);

    hip = (cat1*cat1) + (cat2*cat2);
    hip = sqrt(hip);

    printf("\nDados os catetos %d e %d a hipotenusa sera igual a %d u.m.", cat1, cat2, hip);

    return 0;
}
