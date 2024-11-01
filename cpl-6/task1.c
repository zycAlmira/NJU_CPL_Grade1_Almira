//
// Created by 61760 on 24-11-1.
//
#include <stdio.h>
#include <math.h>
long long qiuhe(int n,int t);
int main(void){
    int n,t;
    long long result;
    scanf("%d%d",&n,&t);
    result=qiuhe(n,t);
    printf("%lld",result);
    return 0;
}
long long qiuhe(int n,int t){
    long long result=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            result+=t*pow(10,j);
        }
    }
    return result;
}