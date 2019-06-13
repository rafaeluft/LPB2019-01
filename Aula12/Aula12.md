# Vetores e matrizes dinâmicas
Há basicamente duas maneiras de criação de vetores e matrizes dinâmicas, uma utilizando o padrão C99 e a outra usando chamadas de alocação dinâmica de memória. As vantagens de uma e de outra, você confere na tentativa de explicação a seguir: 

## Alocando vetores dinâmicos
### Usando o Padrão C99 
``` c
#include<stdio.h>

int main(){
    unsigned int n, i;
    puts("Entre com o tamanho do vetor:");
    scanf("%u", &n);
    int V[n];
    //Acesse o vetor a partir de agora
    for(i=0; i<n; i++)
        V[i] = i+1;
    return 0;
}
```
**Vantagem**: extremamente simples de se declarar e usar. 

**Desvantagem**: caso o programa não consiga fazer a reserva de memória esperada, seu programa simplesmente será fechado. 

### Usando funções de alocação dinâmica

```c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int *V;
    unsgigned int n, i;
    puts("Entre com o tamanho do vetor:");
    scanf("%u", &n);
    V = (int*) malloc(sizeof(int)*n);
    if(V!=NULL){
        //Se entrar aqui o vetor foi alocado com sucesso
    for(i=0; i<n; i++)
        V[i] = i+1;

    }else{
        //Sem memória para o vetor
        puts("ERRO: Desculpe mas sem memória para o vetor");
    }
    return 0;
}

```

## Alocando Matrizes dinâmicas
### Usando o Padrão C99 
```c
#include<stdio.h>

int main(){
    unsigned int n,m, i, j;
    puts("Entre com a dimensão da matriz (nxm):");
    scanf("%u %u", &n, &m);
    int Mat[n][m];
    //Acesse a Matriz a partir de agora
    for(i=0; i<n; i++)
        for(j=0;j<m;j++)
            Mat[i][j] = i+1+j*j;
    return 0;
}
```
### Usando funções de alocação
```c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int **Mat;
    unsgigned int n, m, i, j;
        puts("Entre com a dimensão da matriz (nxm):");
    scanf("%u %u", &n, &m);
    Mat = (int**) malloc(sizeof(int)*n);
    if(Mat!=NULL){
        //Se entrar aqui a primeira fase da matriz foi alocada com sucesso
        //Agora vamos alocar cada linha(como se fosse um vetor)
        for(i=0; i<n; i++){
            V[i] = (int*) malloc(sizeof(int)*m);
            if(V[i]==NULL){
                printf("Erro alocando alinha %u\n", i);
                return 0;
            }
        }
        //Seu código de manipulação da matriz vem aqui (o par de fors, por exemplo)
    }else{
        //Sem memória para a matriz
        puts("ERRO: Desculpe mas sem memória para a matriz");
    }
    return 0;
}
