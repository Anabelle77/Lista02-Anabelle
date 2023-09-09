//7) Faça um programa que leia o número do funcionário, o número de horas trabalhadas mensais, o valor que recebe por hora e o número de filhos
// com idade menor de 14 anos. Calcular e escrever o salário deste funcionário, sendo que cada filho menor de 14 anos acrescenta 10% do salário.
#include <stdio.h>

int main() {
    int numeroFuncionario, horasTrabalhadas, numeroFilhos;
    float valorPorHora, salario;

    printf("Digite o número do funcionário: ");
    scanf("%d", &numeroFuncionario);

    printf("Digite o número de horas trabalhadas mensais: ");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o valor por hora: ");
    scanf("%f", &valorPorHora);

    printf("Digite o número de filhos com idade menor de 14 anos: ");
    scanf("%d", &numeroFilhos);

    salario = horasTrabalhadas * valorPorHora;

    salario += salario * (0.10 * numeroFilhos);

    printf("O salário do funcionário %d é: R$ %.2f\n", numeroFuncionario, salario);

    return 0;
}
