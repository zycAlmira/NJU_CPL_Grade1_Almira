//
// Created by 61760 on 24-10-18
#include<stdio.h>

int main(void) {
    int n,m;
    double percentage = 0;
    int first[100][100] = {0}, second[100][100] = {0};
    scanf("%d %d",&n,&m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &first[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &second[i][j]);
            if(first[i][j] == second[i][j]) {
                percentage++;
            }
        }
    }
    percentage = 100*percentage / (n * m) ;
    printf("%.2f\n", percentage);
    return 0;
}