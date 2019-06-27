#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    unsigned int n1, m1, n2, m2, i, j, k;
    //puts("Entre com n1xm1: ");
    scanf("%u %u", &n1, &m1);
    int A[n1][m1];
    for(i=0;i<n1; i++)
        for(j=0; j< m1; j++){
            scanf("%d", &A[i][j]);
            //printf("%d ", A[i][j]);
        }
        //putchar('\n');

    //puts("Entre com n2xm2: ");
    scanf("%u %u", &n2, &m2);
    int B[n2][m2];
    //putchar('\n');
    for(i=0;i<n2; i++)
        for(j=0; j< m2; j++){
            scanf("%d", &B[i][j]);
            //printf("%d ", B[i][j]);
        }
    //putchar('\n');

    if(m1==n2){
        int C[n1][m2];
        for(i=0;i<n1; i++, putchar('\n'))
            for(j=0; j< m2; j++){
                C[i][j] = 0;
                for(k=0; k< n2; k++)
                    C[i][j]+=A[i][k]*B[k][j];
                printf("%d ", C[i][j]);
            }
    }
    return 0;
}
