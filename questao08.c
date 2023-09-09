//8) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos 
//(aplicados ao custo de fábrica).Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, 
//escrever um programa em C que leia o custo de fábrica de um carro e escreva o custo ao consumidor.
#include <stdio.h>

int main() {
    float custoFabrica, custoDistribuidor, custoConsumidor;

    printf("Digite o custo de fábrica do carro: R$ ");
    scanf("%f", &custoFabrica);

    custoDistribuidor = 0.28 * custoFabrica;

    float custoImpostos = 0.45 * custoFabrica;

    custoConsumidor = custoFabrica + custoDistribuidor + custoImpostos;

    printf("O custo ao consumidor é: R$ %.2f\n", custoConsumidor);

    return 0;
}
