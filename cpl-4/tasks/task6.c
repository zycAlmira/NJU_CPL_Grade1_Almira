//
// Created by 61760 on 24-10-18.
//
#include <stdio.h>

int main(void) {
    int n;
    char square[200][200]={0};
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                scanf("%c",&square[i][j]);
                if(square[i][j]!='o'&&square[i][j]!='*'){
                    j=j-1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char neighbour=48;
            if(square[i][j]=='*'){
                printf("*");
                continue;
            }
            for(int a=0;a<=8;a++){
                if(a==4){
                    continue;
                }
                if(square[i-1+a/3][j-1+a%3]=='*'){
                neighbour++;
                }
            }
            printf("%c",neighbour);
            }
        printf("\n");
    }
    return 0;
}