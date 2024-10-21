//
// Created by 61760 on 24-10-14.
//
#include <stdio.h>
#include <math.h>
int main(void) {
    int n,bits[10000]={0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j=j+i){
            bits[j]=1-bits[j];
        }
    }
    for(int i=1;i<=n;i++){
        if(bits[i]==1){
            printf("%d ",i);
        }
    }
    return 0;
}