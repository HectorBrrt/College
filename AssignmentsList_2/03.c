#include <stdio.h>

int main()
{
    int h, m, s, tempo;
    tempo = 0;
    printf("Digite o tempo de duracao do evento (em segundos): ");
    scanf("%d", &tempo);

    h = tempo/3600;
    m = (tempo-(h*3600))/60;
    s = tempo%60;

    printf("%.2d : %.2d : %.2d", h, m, s);

    return 0;
}
