//
// Created by 61760 on 24-11-10.
//
#include <stdio.h>
#include <string.h>
#include <limits.h>
int main(void) {
    int n, m, d, board[400][400] = {0}, value[400][400] = {0}, max1[1000] = {0}, max2[1000] = {
            0}, max = INT_MIN, num = 0;
    scanf("%d%d%d", &n, &m, &d);
    for (int i = d; i < n + d; i++) {
        for (int j = d; j < m + d; j++) {
            scanf("%d", &board[i][j]);
        }
    }
    value[d][d] = board[d][d];
    for (int i = 1; i <= d; i++) {
        for (int j = 1; j <= i; j++) {
            value[d][d] += board[d + j][d + i - j] + board[d - j][d - i + j] + board[d - i + j][d + j] +
                           board[d + i - j][d - j] ;
        }
    }
    printf("%d",value[d][d]);
    for (int h = 1; h < n; h++) {
        value[d + h][d] = value[d + h - 1][d] + board[d + h + d][d] - board[d + h - 1 - d][d];
        for (int i = 1; i <= d; ++i) {
            value[d + h][d] +=
                    board[d + h + d - i][d + i] + board[d + h + d - i][d - i] - board[d + h + -1 - d + i][d + i] +
                    board[d + h - 1 - d + i][d - i];
        }
    }
    for (int i = d; i < n + d; i++) {
        for (int j = d + 1; j < m + d; j++) {
            value[i][j] = value[i][j - 1] + board[i][j + d] - board[i][j - 1 - d];
            for (int h = 1; h <= d; h++) {
                value[i][j] += board[i + h][j + d - h] + board[i - h][j + d - h] - board[i + h][j - d + h - 1] -
                               board[i - h][j - d + h - 1];
            }
        }
    }
    for (int i = d; i < n + d; i++) {
        for (int j = d; j < m + d; j++) {
            if (max < value[i][j]) {
                max = value[i][j];
                num = 0;
                memset(max1, 0, sizeof(max1));
                memset(max2, 0, sizeof(max2));
                num++;
                max1[num] = i-d+1;
                max2[num] = j-d+1;
            } else if (max == value[i][j]) {
                num++;
                max1[num] = i-d+1;
                max2[num] = j-d+1;
            }
        }
    }
    printf("%d %d\n", max, num);
    for (int i = 1; i <= num; i++) {
        printf("%d %d\n", max1[i], max2[i]);
    }
    return 0;
}
