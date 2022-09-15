/* 
 * Ler um número inteiro de até três dígitos e imprima a saída da seguinte forma:
 * CENTENA = x 
 * DEZENA = x
 * UNIDADE = x 
 */

#include <stdio.h>

int main()
{
    int n, u, d, c;

    n = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    c = n/100;
    u = n%100%10;
    d = ((n%100)-u)/10;

    printf("\nCentena: %d", c);
    printf("\nDezena: %d", d);
    printf("\nUnidade: %d", u);

    return 0;
}
