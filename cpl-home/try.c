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
void