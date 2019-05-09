#include<stdio.h>

int main(){
    unsigned int n, d, cont, soma=0; 
    puts("Entre com a quantidade de números:"); 
    scanf("%u", &n);
    //Exemplo para mostrar o continue com o for com erro de lógica
    for(cont=0; cont<n; cont++){
        printf("Entre com o num %u:", cont+1); 
        scanf("%u", &d);
        if( d % 2 != 0)
            continue; 
        soma+= d; 
    }
    printf("Soma=%u\n", soma); 
    return 0;
}