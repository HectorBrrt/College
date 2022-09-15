/* Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para
 * converter este tempo em anos, meses e dias. Assume que cada mês possui sempre 30 dias.
 */

#include <stdio.h>

int main()
{
    int total, ano, mes, dia;

    total = 0;
    ano = 0;
    mes = 0;
    dia = 0;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &total);

    ano = total/360;
    mes = ((total-(ano*360))/30);
    dia = total%30;

    printf("\nSem acidentes por %d ano(s), %d mes(es), %d dia(s)", ano, mes, dia);

    return 0;
}
