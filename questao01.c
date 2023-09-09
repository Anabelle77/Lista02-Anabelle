//1) Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
#include <stdio.h>

int main() {
    int anos, meses, dias;
    printf("Digite a idade em anos, meses e dias:\n");
    scanf("%d %d %d", &anos, &meses, &dias);

    int idadeEmDias = anos * 365 + meses * 30 + dias;

    printf("A idade em dias é: %d dias\n", idadeEmDias);
    return 0;
}
