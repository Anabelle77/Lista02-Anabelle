//2) Faça um programa que leia dois valores nas variáveis A e B respectivamente, troque o valor contido na variável A pelo valor em B, e o valor em B pelo valor em A,
isto é, imprimiremos A e B com os valores trocados.
#include <stdio.h>

int main() {
    int A, B, temp;

    printf("Digite o valor para A: ");
    scanf("%d", &A);

    printf("Digite o valor para B: ");
    scanf("%d", &B);

    temp = A;
    A = B;
    B = temp;

    printf("A com o valor trocado: %d\n", A);
    printf("B com o valor trocado: %d\n", B);

    return 0;
}
