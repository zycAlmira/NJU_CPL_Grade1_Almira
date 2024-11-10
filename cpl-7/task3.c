//
// Created by 61760 on 24-11-9.
//
#include <stdio.h>
int main(void){
    int r,c,result=0;
    scanf("%d%d",&r,&c);
    char nets[100][100]={0};
    getchar();
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%c",&nets[i][j]);
            }getchar();}
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if(nets[i][j]=='/'&&nets[i][j+1]=='\\'){
            int l=1,L=1;
            while(nets[i+l][j-l]=='/'&&nets[i+l][j+1+l]=='\\'){
                l++;
            }
            for(int m=1;m<=l;m++){
            L=m;
            while(nets[i+m+L-1][j-L+m]=='\\'&&nets[i+m+L-1][j-m+L+1]=='/'){
                m--;
                if(m==0){
                    result++;
                }
            }
            m=L;
            }
        }}}
    printf("%d",result);
    return 0;
}