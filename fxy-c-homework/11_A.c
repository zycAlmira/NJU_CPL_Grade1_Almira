//
// Created by 61760 on 24-12-5.
//
#include <stdio.h>
#include <stdlib.h>
void _switch(int *arr,int n);
int main(){
    int n;
    scanf("%d",&n);
    int *arr=malloc(n*n*sizeof(int));
    for(int i=0;i<(n*n);i++){
        scanf("%d",arr+i);
    }
    _switch(arr,n);
    for(int i=0;i<(n*n);i++){
        printf("%d ",*(arr+i));
        if((i+1)%n==0)
            printf("\n");
    }
    return 0;
}
void _switch(int *arr,int n){
    int b=n/2;
    for(int i=0;i<b;i++){
        for(int j=n-b;j<n;j++){
            int temp=*(arr+i*n+j);
            *(arr+i*n+j)=*(arr+(n-b+i)*n+j-(n-b));
            *(arr+(n-b+i)*n+j-(n-b))=temp;
        }
    }
}