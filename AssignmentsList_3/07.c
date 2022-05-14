#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool ePar(int x)
{
    bool retorno = false;
    if(x % 2 == 0)
        retorno = true;
    else
        retorno = false;
    return retorno;
}

int main()
{
    int pc = 0;
    int user = 0;
    int opcao = 0;

    bool par = true;
    srand(time(0));
    pc = rand() % 10;
    printf("\n============================");
    printf("\n======= PAR OU IMPAR =======");
    printf("\n============================\n");

    printf("\nDigite um numero:");
    scanf("%d",&user);

    printf("[1] par");
    printf("\n[2] impar\n");
    printf("Digite a opcao:");
    scanf("%d", &opcao);

    if((opcao == 1) || (opcao == 2))
    {
        if(opcao == 1)
        {
            par = true;
        }
        else
        {
            par = false;
        }
        if ((ePar(pc+user) && par) || (!ePar(pc+user) && !par))
        {
            printf("\nO computador escolheu: %d ", pc);
            printf("\nVoce venceu!");
        }
        else
        {
            printf("\nO computador escolheu: %d ", pc);
            printf("\nO computador venceu!");
        }
        return 0;
    }
    else
    {
        printf("\nErro, tente novamente.");
        return 0;
    }
}
