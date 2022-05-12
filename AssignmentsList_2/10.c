// Construa um algoritmo que leia 5 números distintos e imprima a soma dos números ímpares.

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, somai;
    n1 = n2 = n3 = n4 = n5 = somai = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    printf("Digite o quarto valor: ");
    scanf("%d", &n4);

    printf("Digite o quinto valor: ");
    scanf("%d", &n5);

    somai = n1*(n1%2) + n2*(n2%2) + n3*(n3%2) + n4*(n4%2) + n5*(n5%2);

    printf("\nA soma dos numeros pares sera de: %d", somai);
    return 0;
}
