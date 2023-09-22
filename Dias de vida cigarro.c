/******************************************************************************
Programa que calcula quantidade de dias que a pessoa perde de vida por fumar.
Usando o dado que um cigarro diminui a vida em 10 minutos.
*******************************************************************************/

#include <stdio.h>

int main()
{
   int cigarros, anos, quantidade;
   float dias;
   
   printf("Quantos cigarros voce fuma por dia?\n");
   scanf("%d", &cigarros);
   
   printf("A quantos anos você fuma?\n");
   scanf("%d", &anos);
   
//Aqui transformamos os dados em cigarros*dias e após dividimos por 144 que são quantos cigarros são necessários para tirar um dia
   
   quantidade = anos * 365 * cigarros;
   
   dias = quantidade / 144;
   
   printf("Você diminuiu sua vida em %.1f dias por fumar.", dias);
}
