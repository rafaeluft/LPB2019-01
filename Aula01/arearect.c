#include<stdio.h>
int main(){
  float base, altura, area;
  printf("Entre com a base do rect: ");
  scanf("%f", &base);
  printf("Entre com a altura do rect: ");
  scanf("%f", &altura);
  area = base*altura;
  printf("Rect (%0.2f x %0.2f)-> Area=%f\n", base, altura, area);
  return 0;
}
