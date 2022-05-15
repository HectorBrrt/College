#include <stdio.h>

int main()
{
   int tempo,horas,minutos,segundos;
   float massaMaterial, mi, mf;

   horas = minutos = segundos = tempo=0;

   mi = mf = massaMaterial=0.0;

   printf("Digite a massa do material em gramas:\n");
   scanf("%f",&massaMaterial);
   mi=massaMaterial;

   do
   {
    massaMaterial=massaMaterial/2;
    tempo=tempo+50;
   }

   while(massaMaterial>0.5);

   mf=massaMaterial;
   horas=tempo/3600;
   minutos=(tempo%3600)/60;
   segundos=(tempo%3600)%60;

   printf("Tempo necessario em horas , minutos e segundos e de : %d horas , %d minutos e %d segundos. \n",horas, minutos, segundos);
   printf("Massa inicial: %.2f \n",mi);
   printf("Massa final: %.2f \n", mf);
}
