//
// Created by 61760 on 24-10-18.
//
#include <stdio.h>
int main(void) {
    int board[10][10]={0};
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d",&board[i][j]);
        }
    }
    int result=1;
    for(int a=0;a<9;a++){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(j==i){
                    continue;
                }
                if(board[a/3*3+i/3][a%3*3+i%3]==board[a/3*3+j/3][a%3*3+j%3]||(board[a][i]==board[a][j]||board[i][a]==board[j][a])){
                    result=0;
                }
            }
        }
    }
    if(result){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}