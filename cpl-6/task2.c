//
// Created by 61760 on 24-11-1.
//
#include <stdio.h>
int main(void){
    int n=0,longestone=-1,min=0,weizhi=0,mid=0;
    int number[10000]={0},l[20000]={0};
    scanf("%d\n",&n);
    for (int i = 0; i <n ; ++i) {
        scanf("%d",&number[i]);
        l[i]=n-i;
    }
    for (int i = 0; i <n ; ++i) {
        for(int j=i;j<=n-1;j++){
            if(number[j]>number[j+1]){
                if(j==n-1){
                    longestone=i;
                    break;
                }
            }else{
                break;
            }
            if(longestone==i){
                break;
            }
        }
    }
    min=10000;
    for (int i = longestone; i <longestone+l[longestone] ; ++i) {
        if(number[longestone-1]<number[i]&&number[i]<=min){
            min=number[i];
            weizhi=i;
        }
    }
    mid=number[weizhi];
    number[weizhi]=number[longestone-1];
    number[longestone-1]=mid;
    for (int i =0; i <l[longestone]/2; ++i) {
        mid=number[l[longestone]+i+1];
        number[l[longestone]+i+1]=number[n-i-1];
        number[n-i-1]=mid;
    }
    for (int i = 0; i <n ; ++i) {
        printf("%d ",number[i]);
    }
    return 0;
}
