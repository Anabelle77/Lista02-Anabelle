//9) Faça um programa que leia as variáveis y e z. Após, calcule e mostre o valor de x, dado pela expressão: x = √(y*(y^22 + z^33))
#include <stdio.h>
#include <math.h>

int main() {
    double y, z, x;

    printf("Digite o valor de y: ");
    scanf("%lf", &y);

    printf("Digite o valor de z: ");
    scanf("%lf", &z);

    double temp = ((pow(y, 22)) + (pow(z, 33)));
    x = sqrt(y * temp);

    printf("O valor de x é: %f\n", x);

    return 0;
}
