//
// Created by 61760 on 24-10-8.
//
#include<stdio.h>
int main(void){
    int n;
    int numbers[100];
    scanf("%d\n",&n);
    for(int i=0;i<(2*n-1);i++){
        scanf("%d",&numbers[i]);
    }
    int k=0;
    for(int j=0;j<(2*n-1);j++){
        while(k<2*n-1)
        {if(k==j){
            k=k+1;
            continue;
        }
        if(numbers[j]==numbers[k])
        {
           k=0;
           break;
        }
        k=k+1;
    }
    if(k==2*n-1){
        printf("%d",numbers[j]);
        break;
    }}
    return 0;
}