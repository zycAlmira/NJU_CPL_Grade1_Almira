//
// Created by 61760 on 24-10-8.
//
#include<stdio.h>
int main(void){
    int n,total=0,r=0;
    int numbers[10000];
    scanf("%d\n",&n);
    for(int i=0;i<=n;i++){
        scanf("%d",&numbers[i]);
    }
    for(int j=0;j<=n;j++){
        total=total+numbers[j];
        if(total < j + 1){
            total+=1;
            r=r+1;
        }}
    printf("%d",r);
    return 0;
}