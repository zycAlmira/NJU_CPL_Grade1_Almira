//
// Created by 61760 on 24-10-18.
//
#include<stdio.h>
int main(void){
    int n,a=0,b=0,board[100][100]={0};
    scanf("%d",&n);
    for(int i=1;i<=(n*n);i++){
        if(i==1){
            a=1;
            b=n/2+1;
            board[a][b]=i;
            continue;
        }
        if(a-1>=1){
            if(b+1<=n){
                if(board[a-1][b+1]==0){
                    a=a-1;
                    b=b+1;
                    board[a][b]=i;
                }else if(board[a-1][b+1]!=0){
                    a=a+1;
                    b=b;
                    board[a][b]=i;
                }
            }else{
                if(board[a-1][1]==0){
                   a=a-1;
                   b=1;
                   board[a][b]=i;
                }else{
                   a=a+1;
                   b=b;
                   board[a][b]=i;
                }
            }
        }else{
            if(b+1<=n){
                if(board[n][b+1]==0){
                    a=n;
                    b=b+1;
                    board[a][b]=i;
                }else{
                    a=a+1;
                    b=b;
                    board[a][b]=i;
                }
            }else{
                if(board[1][n]==0){
                    a=1;
                    b=n;
                    board[a][b]=i;
                }else{
                    a=a+1;
                    b=b;
                    board[a][b]=i;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",board[i][j]);
        }
        printf("\n");
    }
    return 0;
}