//
// Created by 61760 on 24-10-18.
//
#include <stdio.h>

int main(void) {
    int m,n,p;
    scanf("%d %d %d\n",&m,&n,&p);
    int A[100][100]={0},B[100][100]={0},C[100][100]={0};
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=p;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=p;j++){
            for(int a=1;a<=n;a++){
                C[i][j]+=A[i][a]*B[a][j];
            }
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}