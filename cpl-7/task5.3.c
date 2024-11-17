//
// Created by 61760 on 24-11-11.
//
#include <stdio.h>
#define MAX_N 100

int main(void) {
    int n, result1 = 0, result2 = 0, a1, b1, c1,aa[137]={0},bb[137]={0},cc[137]={0}, x = 0;
    scanf("%d", &n);
    getchar();
    char space1[MAX_N][MAX_N]= {0},space2[MAX_N][MAX_N]= {0},space3[MAX_N][MAX_N]= {0};
    char bomb;
    for (int a = 1; a <= n+1; a++) {
        for (int b = 1; b <= n; b++) {
            for (int c = 1; c <= n; c++) {
            if(a>1&&a<n){
            scanf("%c", &space3[b][c]);
            if((space2[b-1][c]=='*'+space2[b+1][c]=='*'+space2[b][c+1]=='*'+space2[b][c-1]=='*'+space3[b][c]=='*'+space1[b][c]=='*')!=(space1[b][c]-48)){
                x++;
                aa[x]=a-1;
                bb[x]=b;
                cc[x]=c;}
            space1[b][c]=space2[b][c];
            space2[b][c]=space3[b][c];
            }else{

            }
        }}}

    return 0;
}