#include <stdio.h>

int main() {
    int idadeEmDias;
    printf("Digite a idade em dias: ");
    scanf("%d", &idadeEmDias);

    int anos, meses, dias;

    anos = idadeEmDias / 365;
    int diasRestantes = idadeEmDias % 365;

    meses = diasRestantes / 30;
    dias = diasRestantes % 30; 

    printf("Idade: %d anos, %d meses, %d dias\n", anos, meses, dias);

    return 0;
}