#include<stdio.h>

int main(){
    int b, n, i, prod=1;
    puts("Entre com a base(>=2) e o expoente (>1):");
    scanf("%d %d", &b, &n);
    if(b<2 || n<=1){
        puts("Dados incorretos");
    }else{
        printf("b=%d n=%d", b, n);
        for(i=1; i<=n; i++)
            prod*=b;
        printf("Resultado: %d\n", prod);
    }

    return 0;
}