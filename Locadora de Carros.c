/******************************************************************************
Programa que calcula o valor a ser pago por um aluguel de carro.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int dias;
    float km, valor;
    
    printf("Por quantos dias você ficou com o carro?\n");
    scanf("%d", &dias);
    
    printf("Quantos km você percorreu com o carro?\n");
    scanf("%f", &km);
    
    // O valor da diária do carro é 90 e o valor do km 20 centavos
    
    valor = dias * 90 + km * 0.2;
    
    printf("Você deve pagar R$%.2f.", valor);
    
    
}
