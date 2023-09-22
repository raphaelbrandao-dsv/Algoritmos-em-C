/******************************************************************************
Programa que calcula quantidade máxima possível de bombons a serem comprados.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float din, preco;
    int bombom;
    
    printf("Quanto dinheiro você possui?\n");
    scanf("%f", &din);
    
    printf("Qual o preço do bombom?\n");
    scanf("%f", &preco);
    
    // Como bombom é um int teremos sempre o valor inteiro e será desconsiderado a parte decimal que seriam frações de um bombom.
    
    bombom = din / preco;
    
    printf("O máximo de bombons a serem comprados é %d", bombom);
    
    
}
