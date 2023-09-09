//8. Lê o saldo de uma aplicação e imprima o novo saldo, considerado o reajuste de 1%.
#include<stdio.h>
int main(void){
  int saldo, reajuste;
  
  printf("Insira seu saldo: ");
  scanf("%d",&saldo);

  reajuste = saldo + saldo*0.01;

  printf("O novo saldo é de: %d",reajuste);
  return 0;
}