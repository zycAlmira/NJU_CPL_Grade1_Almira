//
// Created by 61760 on 24-11-9.
//
#include <stdio.h>
int main(void){
    int n,L,wine[10005],max[10005],value=0,b=0;
    scanf("%d%d",&n,&L);
    for(int i=0;i<n;i++){
        scanf("%d",&wine[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&max[i]);
    }
    for(int i=n-1;i>0;i--){
        for(int j=n-1;j>n-i;j--){
            if(wine[j]>wine[j-1]){
                int temp=wine[j];
                wine[j]=wine[j-1];
                wine[j-1]=temp;
                int temp2=max[j];
                max[j]=max[j-1];
                max[j-1]=temp2;
            }
        }
    }
    while(1){
        value+=wine[b]*((L>max[b])?max[b]:L);
        L=L-max[b];
        if(L<=0){
            break;
        }
        b++;
        if(b==n){
            break;
        }
    }
    printf("%d",value);
    return 0;
}
