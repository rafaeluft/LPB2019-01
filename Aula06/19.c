#include<stdio.h>

int main(){
    unsigned int n,d;
    double S=0;
    for(n=1,d=1; d<=55; d++, n+=2)
        S+=(float)n/d;
    printf("S=%lf\n", S);
    return 0;
}