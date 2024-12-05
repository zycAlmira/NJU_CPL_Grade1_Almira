//
// Created by 61760 on 24-12-5.
//
#include <stdio.h>
void shudu(int board[9][9]);
int main() {
    int n;
    int board[9][9];
    scanf("%d", &n);
    for(int h = 0; h < n; h++){
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &board[i][j]);
        }
    }
    shudu(board);
    }
}
void shudu(int board[9][9]) {
    for(int n=0;n<9;n++){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(i==j){continue;}
            if(board[n][i]==board[n][j]){
                printf("Wrong\n");
                return;
            }
        }
    }}

    for(int n=0;n<9;n++){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(i==j){continue;}
            if(board[i][n]==board[j][n]){
                printf("Wrong\n");
                return;
            }
        }
    }}
    for(int n=0;n<9;n++) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (i == j) { continue; }
                if (board[(n / 3) * 3 + i / 3][(n % 3) * 3 + i % 3] ==
                    board[(n / 3) * 3 + j / 3][(n % 3) * 3 + j % 3]) {
                    printf("Wrong\n");
                    return;
                }
            }
        }
    }
    printf("Right\n");
}
