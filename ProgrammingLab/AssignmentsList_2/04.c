/* Um sistema de equações lineares do tipo: {ax + by = c} {dx + ey = f} , pode ser resolvido segundo mostrado:
 * x = {(ce - bf) / (ae - bd)}
 * y = {(af - cd) / (ae - bd)}
 * Escreva um algoritmo que lê os coeficientes a, b, c, d, e e f e calcula e mostra os valores de x e y.
 */

#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, x, y;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    x = 0;
    y = 0;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    printf("Digite o valor de d: ");
    scanf("%d", &d);

    printf("Digite o valor de e: ");
    scanf("%d", &e);

    printf("Digite o valor de f: ");
    scanf("%d", &f);

    x = (c*e-b*f)/(a*e-b*d);
    y = (a*f-c*d)/(a*e-b*d);
    printf("\nx = (%d*%d-%d*%d)/(%d*%d-%d*%d)", c, e, b, f, a, e, b, d);
    printf("\ny = (%d*%d-%d*%d)/(%d*%d-%d*%d)\n", a, f, c, d, a, e, b, d);
    printf("\nO valor de x: %d", x);
    printf("\nO valor de y: %d", y);

    return 0;
}
