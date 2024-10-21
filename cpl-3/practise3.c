//
// Created by 61760 on 24-10-12.
//
#include<stdio.h>
int main(void) {
    int a,b,l;
    scanf("%d%d",&a,&b);
    if(b==1){
        l=6;
    }else{
        l=b-2;
    }
    for(int i=1;i<=3*l-1;i++){
        printf(" ");
    }
    for(int i=1;i<=a;i++){
    if(l<=6){
        printf("%3d",i);
        l=l+1;
    }else {
        l=1;
        printf("\n");
        printf("%2d",i);
    }
    }

    return 0;
}
