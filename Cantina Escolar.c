/******************************************************************************
Programa que calcula valor gasto em cantina escolar.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int pao_queijo, coxinha, suco, refri;
    float valor;
    
    printf("Quantos pães de queijo você consumiu?\n");
    scanf("%d", &pao_queijo);
    
    printf("Quantas coxinhas você consumiu?\n");
    scanf("%d", &coxinha);
    
    printf("Quantos sucos você consumiu?\n");
    scanf("%d", &suco);
    
    printf("Quantos refrigerantes você consumiu?\n");
    scanf("%d",&refri);
    
    // O valor do pão de queijo é R$3.50, da coxinha 4.00, do suco 3.00 e do refrigerante 5.00
    
    valor = pao_queijo * 3.5 + coxinha * 4 + suco * 3 + refri * 5;
    
    printf("O valor total é de R$%.2f.", valor);
}