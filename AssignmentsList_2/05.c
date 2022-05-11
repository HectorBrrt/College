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
