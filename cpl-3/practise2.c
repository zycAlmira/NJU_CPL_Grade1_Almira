//
// Created by 61760 on 24-10-12.
//
#include<stdio.h>
int main(void) {
    int i;
    scanf("%d",&i);
    for(int a=1;a<=i;a++){
        for(int b=1;b<=a;b++){
            int s=a*b;
            printf("%d",b);
            printf("*");
            printf("%d",a);
            printf("=");
            printf("%d ",s);
        }
        printf("\n");
    }
    return 0;
}
