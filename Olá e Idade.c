/******************************************************************************
Programa que interage com usuC!rio dizendo seu nome e sua idade.

*******************************************************************************/
#include <stdio.h>

int
main ()
{

    char nome[20];
    int idade;

    printf ("Digite seu nome: ");
    scanf ("%s", nome);

    printf ("Digite agora sua idade: ");
    scanf ("%d", &idade);

    printf ("Olá %s! Você tem %d anos.", nome, idade);

    return 0;
}