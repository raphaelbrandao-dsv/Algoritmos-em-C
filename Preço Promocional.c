/******************************************************************************
Programa que calcula o valor promocional de um produto que está com 5% de desconto.

*******************************************************************************/
#include <stdio.h>

int main()
{

    float preco;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    
    preco = preco * 0.95;
    printf("O preço promocional do produto é %.2f", preco);
    
    return 0;

}
