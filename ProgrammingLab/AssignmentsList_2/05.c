/* Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida 
 * respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a quantidade de
 * camisetas pequenas, médias e grandes referentes a uma venda, e a máquina informe quanto será o valor
 * arrecadado. 
 */


#include <stdio.h>

int main() {
    int cp, cm, cg;
    float v;
    cp = cm = cg = 0;

    printf("Digite a quntidade de camisetas pequenas: ");
    scanf("%d", &cp);

    printf("Digite a quntidade de camisetas medias: ");
    scanf("%d", &cm);

    printf("Digite a quntidade de camisetas grandes: ");
    scanf("%d", &cg);

    v = cp*10 + cm*12 + cg*15;

    printf("O valor tolal dessa compra sera de: R$%.2f", v);

    return 0;
}
