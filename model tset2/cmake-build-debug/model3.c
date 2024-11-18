//
// Created by 61760 on 24-11-17.
//
#include <stdio.h>
int up(char map[][100],int,int);
int down(char map[][100],int,int,int);
int left(char map[][100],int,int);
int right(char map[][100],int,int,int);
int main(void){
    int r,c,n=0;
    char map[100][100]={0};
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++){
        scanf("%s",map[i]);
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            switch (map[i][j]) {
                case '.':
                    continue;
                case 'U':
                    if(up(map,i,j)){
                        continue;
                    }else{
                        break;
                    }
                case 'D':
                    if(down(map,i,j,r)){
                        continue;
                    }else{
                        break;
                    }
                case 'L':
                    if(left(map,i,j)){
                        continue;
                    }else{
                        break;
                    }
                case 'R':
                    if(right(map,i,j,c)){
                        continue;
                    }else{
                        break;
                    }
            }
          if(up(map,i,j)){
              if(map[i][j]=='U'){
                  continue;
              }else{
                  n++;
                  map[i][j]='U';
                  continue;
              }
          }else if(down(map,i,j,r)){
              if(map[i][j]=='D'){
                  continue;
              }else{
                  n++;
                  map[i][j]='D';
                  continue;
              }
          }else if(left(map,i,j)){
              if(map[i][j]=='L'){
                  continue;
              }else{
                  n++;
                  map[i][j]='L';
                  continue;
              }
          }else if(right(map,i,j,c)){
              if(map[i][j]=='R'){
                  continue;
              }else{
                  n++;
                  map[i][j]='R';
                  continue;
              }
          }else{
              printf("-1");
              return 0;
          }
    }}
    printf("%d",n);
    return 0;
}
    int up(char map[][100],int i,int j) {
        for(int k=i-1;k>=0;k--){
            if(map[k][j]!='.'){
                return 1;
            }else{
                if(k==0){
                    return 0;
                }
                continue;
            }
        }
        return 0;
    }
    int down(char map[][100],int i,int j,int r) {
        for(int k=i+1;k<r;k++){
            if(map[k][j]!='.'){
                return 1;
            }else{
                if(k==r-1){
                    return 0;
                }
                continue;
            }
        }
        return 0;
}
    int left(char map[][100],int i,int j) {
        for(int k=j-1;k>=0;k--){
            if(map[i][k]!='.'){
                return 1;
            }else{
                if(k==0){
                    return 0;
                }
                continue;
            }
        }
        return 0;
    }
    int right(char map[][100],int i,int j,int c) {
        for(int k=j+1;k<c;k++){
            if(map[i][k]!='.'){
                return 1;
            }else{
                if(k==c-1){
                    return 0;
                }
                continue;
            }
        }
        return 0;
    }