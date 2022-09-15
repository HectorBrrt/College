/* 1.12.2. Tem-se um conjunto de dados contendo a altura e sexo (masculino,
 * feminino) de 50 pessoas. Fazer um algoritmo que calce e escreva:
 * a maior e a menor altura do grupo;
 * a média de altura das mulheres;
 * o número de homens
 */


#include <stdio.h>

int main()
{
    int sexo, altura, maiorAfem, maiorAmasc, contadorMasc, contadorFem, menorAmasc, menorAfem, mediaF, soma;
    contadorMasc = 0;
    contadorFem = 0;
    soma = 0;
    sexo = 0;
    altura = 0;
    maiorAmasc = 0; // maior altura masculina
    maiorAfem = 0; // maior altura feminina
    menorAmasc = 10000; // menor altura masculina
    menorAfem = 10000; // menor altura feminina
    printf("Digite 0 para homem e 1 para mulher: \n");

    for(int contador = 1; contador<=50; contador++)
    {
        printf("\nIdentificacao: ");
        scanf("%d", &sexo);
        printf("\nDigite sua altura em centimetros:  ");
        scanf("%d", &altura);
        if (sexo == 0)
        {
            contadorMasc = contadorMasc + 1;
            if (altura>maiorAmasc)
            {
                maiorAmasc = altura;
            }
            if (altura<menorAmasc)
            {
                menorAmasc = altura;
            }

        }
        else if (sexo == 1)
        {
            contadorFem = contadorFem + 1;
            soma = soma + altura;
            if (altura>maiorAfem)
            {
                maiorAfem = altura;
            }
            if (altura<menorAfem)
            {
                menorAfem = altura;
            }
        }
        else
        {
            printf("ERRO REINICIE O PROGRAMA");
        }
    }
    mediaF = soma/contadorFem;

    printf("Maior e a menor altura dos homens sera respectivamente: %d cm e %d cm\n", maiorAmasc, menorAmasc);
    printf("Maior e a menor altura das mulheres sera respectivamente: %d cm e %d cm\n", maiorAfem, menorAfem);
    printf("A media das alturas das mulheres sera de: %.2f", mediaF, "cm");
    printf("Quantidade de homens: %d\n", contadorMasc);
}
