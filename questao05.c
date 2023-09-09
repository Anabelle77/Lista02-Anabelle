//5) Faça um programa que leia A, B e C e calcule a seguinte fórmula: (7*C+5*B) /(2*A*3), armazenando-a na variável Result.
#include <stdio.h>

int main() {
    float A, B, C, Result;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    Result = ((7*C)+(5*B))/(2*A*3);

    printf("O resultado da fórmula é: %.2f\n", Result);

    return 0;
}
