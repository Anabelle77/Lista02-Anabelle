//4) Faça um programa que leia dois valores inteiros (X e Y) e calcule X na potência Y.
Observação: utilizar a função matemática.
#include <stdio.h>
#include <math.h>

int main() {
    int X, Y;
    double resultado;

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    printf("Digite o valor de Y: ");
    scanf("%d", &Y);

    resultado = pow(X, Y);

    printf("%d elevado a %d é igual a %.2f\n", X, Y, resultado);

    return 0;
}