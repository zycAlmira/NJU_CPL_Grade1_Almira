//
// Created by me on 24-10-17.
//
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define SIZE 4
int main(void) {
    int n;
    scanf("%d",&n);
    const int square[SIZE][SIZE]={
            1,1,0,0,
            1,1,0,0,
            0,0,1,1,
            0,0,1,1,

    };
    /* 写法二{
     * [1]={[1]=1}}自动初始化为0
     * 写法三[1][1]=1,
     * 写法四{
     * 0,0,0,
     */
    int big_square[SIZE+2][SIZE+2]={0};
    int new_square[SIZE][SIZE]={0};
    for(int i=1;i<=SIZE;i++){
        for(int j=1;j<=SIZE;j++){
            big_square[i][j]=square[i-1][j-1];}
    }
    while(n--){
    for(int i=1;i<=SIZE;i++){
        for(int j=1;j<=SIZE;j++){
            int neighbour=-big_square[i][j];
            for(int a=0;a<=8;a++){
                neighbour+=big_square[i-1+a/3][j-1+a%3];
            }
            switch (neighbour){
                case 0:new_square[i-1][j-1]=0;
                    break;
                case 3:new_square[i-1][j-1]=1;
                break;
                case 4:new_square[i-1][j-1]=0;
                break;
            }
        }}
    for(int i=0;i<SIZE;i++){
        for (int j = 0; j < SIZE ;j++) {
            printf("%c", new_square[i][j] ? '*' : ' ');
        }
        printf("\n");
    }
        for(int i=1;i<=SIZE;i++){
            for(int j=1;j<=SIZE;j++){
                big_square[i][j]=new_square[i-1][j-1];}
        }
    sleep(1);//等待一秒linux#include<stdlib.h>
             //Sleep windows
    //system("Clr");//linux
    }
   return 0;
}