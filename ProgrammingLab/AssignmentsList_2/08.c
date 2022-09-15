/* A lanchonete Gosto vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma
 * fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou presunto pesa 50
 * gramas, e que a rodela de hambúrguer pesa 100 gramas, faça um algoritmo em que o dono forneça a
 * quantidade de sanduíches a fazer, e a máquina informe as quantidades (em quilos) de queijo, presunto e
 * carne necessários para compra.
 */

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
