#include<stdio.h>
int main(){
  float base, altura, area;
  printf("Entre com a base e altura do rect: ");
  scanf("%f %f", &base, &altura);
  area = base*altura;
  printf("Rect (%0.2f x %0.2f)-> Area=%f\n", base, altura, area);
  return 0;
}
