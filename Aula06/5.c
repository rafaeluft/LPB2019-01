#include<stdio.h>
int main(){
    unsigned int soma=0, i, par;
    for(i=1, par=2; i<=50; i++, par+=2)
        soma+=par;
    printf("Soma=%u\n", soma);
    return 0;
}