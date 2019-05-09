#include<stdio.h>

int main(){
    unsigned int n, d, cont=0, soma=0; 
    puts("Entre com a quantidade de números:"); 
    scanf("%u", &n);
    while(cont<n){
        printf("Entre com o num %u:", cont+1); 
        scanf("%u", &d);
        if( d % 2 != 0)
            continue; 
        soma+= d; 
        cont++;
    }
    printf("Soma=%u\n", soma); 
    return 0;
}