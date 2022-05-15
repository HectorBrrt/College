/* 1.12.3. A conversÃ£o de graus Fahrenheit para centígrados é obtida por:
 * C = (5/9)(F-32)
 * Fazer um algoritmo que calcule e esceva uma tabela de centígrados em função
 * de graus Fahrenheit, que variam de 50 a 150 de 1 em 1.
 */

#include <stdio.h>

int main()
{
    float c;
    int f;
    c = 0;
    f = 0;
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    for(int i = 50; i <= 150; i++)
    {
        f = i;
        c = 5*(f-32);
        c = c/9;
        printf("\nC = %.2f\tF = %d\n", c, f);
    }
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    return 0;
}
