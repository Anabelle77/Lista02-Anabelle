//3) Faça um programa que leia cinco números inteiros, calcule e escreva a soma, o produto e a média dos números lidos.
#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int soma, produto;
    float media;

    printf("Digite cinco números inteiros separados por espaços:\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    soma = num1 + num2 + num3 + num4 + num5;

    produto = num1 * num2 * num3 * num4 * num5;

    media = (float)(soma) / 5.0;

    printf("Soma dos números: %d\n", soma);
    printf("Produto dos números: %d\n", produto);
    printf("Média dos números: %.2f\n", media);

    return 0;
}
