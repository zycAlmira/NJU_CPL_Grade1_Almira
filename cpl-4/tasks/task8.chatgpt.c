//
// Created by 61760 on 24-10-19.
//
#include <stdio.h>

int main(void) {
    int m, n;
    scanf("%d%d", &m, &n);
    int board[100][100] = {0}, number[10000] = {0};
    int a[100] = {0}, b[100] = {0}, c[100] = {0}, d[100] = {0}, result[100] = {0};
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &board[i][j]);
            number[board[i][j]] += 1;
            if (number[board[i][j]] == 1) {
                a[number[board[i][j]]] = i;
                b[number[board[i][j]]] = j;
            } else {
                c[number[board[i][j]]] = i;
                d[number[board[i][j]]] = j;
            }
        }
    }
    for (int i = 1; i <= m*n/2; i++) {
            int shang = 0, xia = 0, zuo = 0, you = 0;
            for (int j = a[i] - 1; j > 0; j--) {
                shang += board[j][b[i]];
            }
            for (int j = c[i] + 1; j <= m; j++) {
                xia += board[j][d[i]];
            }
            for (int j = b[i] - 1; j > 0; j--) {
                zuo += board[a[i]][j];
            }
            for (int j = d[i] + 1; j <= n; j++) {
                you += board[c[i]][j];
            }

            // 判断是否消除
            if ((shang == 0 && b[i] != d[i]) || (xia == 0 && b[i] != d[i]) ||
                (zuo == 0 && a[i] != c[i]) || (you == 0 && a[i] != c[i])) {
                for (int j = a[i]; j <= c[i]; j++) {
                    for (int k = b[i]; k <= d[i]; k++) {
                        board[j][k] = 0; // 消除
                    }
                }
                result[i] = 1; // 记录已消除的数字
            }
        }

    // 输出结果
    for (int i = 1; i <= 10000; i++) {
        if (result[i]) {
            printf("%d ", i);
        }
    }

    return 0;
}
