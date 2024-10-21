//
// Created by 61760 on 24-10-14.
//
#include <stdio.h>
int main(void) {
    int T,result[1000]={0};

    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        int a=0,d[1000]={0},numbers[10000];
        scanf("%d",&a);
        for(int j=1;j<=a;j++){
            scanf("%d",&numbers[j]);
        }
        for(int j=1;j<=a;j++){
            if(numbers[j]-j>=0){
                d[j]=numbers[j]-j;
            }else{
                d[j]=-numbers[j]+j;
            }
            if(d[j]+1-a>=0){
                result[i]=1;
                break;
            }
        }
    }
    for(int i=1;i<=T;i++){
        if(result[i]==1){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
    }
    return 0;
}