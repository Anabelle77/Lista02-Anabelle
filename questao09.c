//9. Entre com a base e a altura de um retângulo e mostre os resultados:
//a. Perímetro (Perímetro é igual à soma dos 4 lados)
//b. Área (Área é igual à lado vezes lado)
#include<stdio.h>
int main(void){
  int base,altura,peri,area;
  printf("Insira a base: ");
  scanf("%d",&base);
  printf("Insira o lado: ");
  scanf("%d",&altura);

  peri = (base*2 + altura*2);
  area = (base*altura);

  printf("O perimetro é: %d\nA área é: %d",peri,area);
  return 0;
  
}