//
// Created by 61760 on 24-10-19.
//
#include <stdio.h>

int main(void) {
    int m,n;
    scanf("%d %d\n",&m,&n);
    int board[100][100] = {0},number[10000]={0},a[100]={0},b[100]={0},c[100]={0},d[100]={0},result[100]={0};
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &board[i][j]);
            number[board[i][j]]+=1;
            if(number[board[i][j]]==1){
                a[board[i][j]]=i;
                b[board[i][j]]=j;

            }else{
                c[board[i][j]]=i;
                d[board[i][j]]=j;
            }
        }
    }
    for(int i=1;i<=m*n/2;i++){
        int shang=0,xia=0,zuo=0,you=0;
        for(int j=a[i];j>=0;j--){
            shang+=board[j][b[i]];}
        for(int j=c[i];j>=0;j--){
            shang+=board[j][d[i]];}
        if(shang==2*i){
            board[a[i]][b[i]]=0;
            board[c[i]][d[i]]=0;
            result[i]=1;
            continue;
        }
        for(int j=a[i];j<=m;j++){
            xia+=board[j][b[i]];}
        for(int j=c[i];j<=m;j++){
            xia+=board[j][d[i]];}
        if(xia==2*i){
            board[a[i]][b[i]]=0;
            board[c[i]][d[i]]=0;
            result[i]=1;
            continue;
        }
        for(int j=b[i];j>=0;j--){
            zuo+=board[a[i]][j];}
        for(int j=d[i];j>=0;j--){
            zuo+=board[c[i]][j];}
        if(zuo==2*i){
            board[a[i]][b[i]]=0;
            board[c[i]][d[i]]=0;
            result[i]=1;
            continue;
        }
        for(int j=b[i];j<=n+1;j++){
            you+=board[a[i]][j];}
        for(int j=d[i];j<=n+1;j++){
            you+=board[c[i]][j];}
        if(you==2*i){
            board[a[i]][b[i]]=0;
            board[c[i]][d[i]]=0;
            result[i]=1;
            continue;
        }
    }
    for(int i=1;i<=(m*n)/2;i++){
        if(result[i]){
            printf("%d ",i);
        }
    }
    return 0;
}