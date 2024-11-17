//
// Created by 61760 on 24-11-10.
//
#include <stdio.h>
#define MAX_N 605
int main(void) {
    int n, result1 = 0, result2 = 0, a1, b1, c1, aa[137] = {0}, bb[137] = {0}, cc[137] = {0}, x = 0;
    scanf("%d", &n);
    getchar();
    char space[MAX_N][MAX_N][MAX_N] = {0}, bomb;
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

                if (space[a][b][c] > '0' && space[a][b][c] <= '6') {
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