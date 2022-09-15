/* Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um restaurante. Faça um
 * algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que Carlos
 * e André não paguem centavos. Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para
 * André e R$35,53 para Felipe.
 */

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
