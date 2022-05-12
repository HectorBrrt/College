/* RecheioSanduiche = 2 fatias de queijo + 1 fatia de presunto + 1 rodela de hamburguer.
 * queijo = presunto = 50 gramas
 * rodelo de hamburguer = 100 gramas
 */

#include <stdio.h>

int main() {
    int s;
    float q, p, h, qtdq, qtdp, qtdh;
    q = p = 50;
    h = 100;

    printf("Digite a quantidade de sanduiches: ");
    scanf("%d", &s);

    qtdq = s*(q/1000)*2;
    qtdp = s*(p/1000);
    qtdh = s*(h/1000);

    printf("\nVoce precisara de:\n%.2f kg de Queijo,\n%.2f kg de presunto e\n%.2f kg de hamburger.", qtdq, qtdp, qtdh);
    return 0;
}
