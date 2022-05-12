#include <stdio.h>

int main()
{
    float conta,  pfe;
    int pca, pan;

    conta = 0;

    printf("Digite o valor da conta: R$");
    scanf("%f", &conta);
    pca = conta/3;
    pan = conta/3;
    pfe = conta-pca-pan;
    
    printf("Parte do Carlos: R$%d\nParte do Andre: R$%d\nParte do Felipe: R$%.2f", pca, pan, pfe);
    return 0;
}
