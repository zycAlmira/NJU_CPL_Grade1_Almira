//
// Created by 61760 on 24-10-27.
//
#include<stdio.h>
#include <string.h>
#include <ctype.h>
char update(char board[][12]);
int main(void){
    char board[10][10]={0};
    memset(board,'*',sizeof(board));
    update(board);
    printf("");
}

