//
// Created by 61760 on 24-10-21.
//
#include <stdio.h>
int main(void){
    int m,n;
    char s[100][100]={0};
    scanf("%d%d\n",&m,&n);
    for(int i=0;i<=m+3;i++){
        for(int j=0;j<=n+3;j++){
            s[i][j]=48;
        }}
    for (int i = 1; i <= n; i++)
        scanf("%c",&s[0][i]);
    for(int i=1;i<=m-1;i++){
        for(int j=1;j<=n;j++){
            if(((s[i-1][j-1]==49&&(s[i-1][j]==49&&s[i - 1][j + 1] == 49)) || (s[i - 1][j - 1] == 49&& (s[i - 1][j]==48&&s[i - 1][j + 1]==48))) || (s[i - 1][j - 1] == 48 && (s[i - 1][j]==48&&(s[i - 1][j + 1]==48)))){
                s[i][j]=48;}
            else{
                s[i][j]=49;}
            printf("%c",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
