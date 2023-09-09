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