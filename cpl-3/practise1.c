//
// Created by 61760 on 24-10-12.
//
#include <stdio.h>
int main(void) {
    int a,b,max,min,re=1;
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    min=a+b-max;
    for(int i=2;i<=min;i++){
        if(a%i==0&&b%i==0){
            re=i;
        }
    }
    printf("%d",re);
}