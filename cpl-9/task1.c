//
// Created by 61760 on 24-12-8.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *a,const void *b){
    return (*(int*)a - *(int*)b);
}
int num[1000005]={0};
int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<q;i++){
        int q;
        scanf("%d",&q);
        if(bsearch(&q,num,n,sizeof(int),compare))
        printf("%d\n",(int*)bsearch(&q,num,n,sizeof(int),compare)-num);
        else{
            printf("-1\n");
        }
    }
    return 0;
}