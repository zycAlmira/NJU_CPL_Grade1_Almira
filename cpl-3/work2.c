//
// Created by 61760 on 24-10-10.
//
#include<stdio.h>
#include <math.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++) {
        int d;
        d=pow(i,0.5);
        for(int j=2;j<=d;j++){
        if(i%j==0){
           break;
        }
        if(j==d){
            printf("%d ",i);
        }}
    }
    return 0;
}