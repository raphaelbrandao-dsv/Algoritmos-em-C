/******************************************************************************
Programa que interage com usuário dizendo Olá "Fulano"

*******************************************************************************/
#include <stdio.h>

int main()
{

char nome[20];

    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Olá %s.", nome);
    
    return 0;
}
