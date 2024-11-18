#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n,result1=0,result2=0,a1,b1,c1,aa[37]={0},bb[37]={0},cc[37]={0},x=0;
    scanf("%d",&n);
    getchar();
    char ***space = (char ***) malloc((n+2) * sizeof(char**));
    for(int i=0;i<n+2;i++){
        space[i] = (char **) malloc((n+2) * sizeof(char*));
        for(int j=0;j<n+2;j++){
            space[i][j] = (char *) malloc((n+2) * sizeof(char));}}
    char bomb;
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            for (int c = 1; c <= n; c++) {
                scanf("%c", &space[a][b][c]);
                if (space[a][b][c] == '?') {
                    a1 = a;
                    b1 = b;
                    c1 = c;
                }
            }
        }
    }
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            for (int c = 1; c <= n; c++) {
                if (space[a][b][c] >='0' && space[a][b][c] <= '6') {
                    space[a1][b1][c1] = '?';
                    bomb = '0' + (space[a - 1][b][c] == '*') + (space[a + 1][b][c] == '*') +
                           (space[a][b - 1][c] == '*') +
                           (space[a][b + 1][c] == '*') + (space[a][b][c - 1] == '*') + (space[a][b][c + 1] == '*');
                    if (bomb != space[a][b][c]) {
                        result1 = 1;
                    }
                    space[a1][b1][c1] = '*';
                    bomb = '0' + (space[a - 1][b][c] == '*') + (space[a + 1][b][c] == '*') +
                           (space[a][b - 1][c] == '*') +
                           (space[a][b + 1][c] == '*') + (space[a][b][c - 1] == '*') + (space[a][b][c + 1] == '*');
                    if (bomb != space[a][b][c]) {
                        aa[x] = a;
                        bb[x] = b;
                        cc[x] = c;
                        x++;
                        result2 = 1;
                    }
                }
            }
        }
    }
    if ((result1 + result2) == 2) {
        printf("invalid\n");
        for (int i = 0; i < x; i++) {
            printf("%d %d %d\n", aa[i], bb[i], cc[i]);
        }
    } else {
        printf("valid\n");
        if (result1 == 0) {
            printf("%c", ('0' + (space[a1 - 1][b1][c1] == '*') + (space[a1 + 1][b1][c1] == '*') +
                          (space[a1][b1 - 1][c1] == '*') +
                          (space[a1][b1 + 1][c1] == '*') + (space[a1][b1][c1 - 1] == '*') +
                          (space[a1][b1][c1 + 1] == '*')));
        } else {
            printf("*");
        }
    }
    return 0;
}