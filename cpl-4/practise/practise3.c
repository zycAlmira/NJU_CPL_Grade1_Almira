//
// Created by 61760 on 24-10-21.
//
#include <stdio.h>
int main(void){
    int m,n;
    int s[100][100]={0};
    scanf("%d %d",&m,&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&s[0][i]);
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(((s[i-1][j-1]==1&&(s[i-1][j]= s[i - 1][j + 1] != 0 )) || (s[i - 1][j - 1] == 1 && (s[i - 1][j]=s[i - 1][j + 1]==0))) || (s[i - 1][j - 1] == 0 && (s[i - 1][j]=s[i - 1][j + 1]==0))){
                s[i][j]=0;}
            else{
                s[i][j]=1;}
            printf("%d",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}