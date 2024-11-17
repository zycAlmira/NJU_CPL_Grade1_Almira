#include <stdio.h>

#define MAX_N 135
int count_bombs(int a, int b, int c, char space[MAX_N][MAX_N][MAX_N], int n) {
    int bomb_count = 0;
    int directions[6][3] = {
            {-1, 0, 0}, {1, 0, 0}, {0, -1, 0}, {0, 1, 0}, {0, 0, -1}, {0, 0, 1}
    };

    for (int i = 0; i < 6; i++) {
        int na = a + directions[i][0];
        int nb = b + directions[i][1];
        int nc = c + directions[i][2];

        if (na >= 1 && na <= n && nb >= 1 && nb <= n && nc >= 1 && nc <= n) {
            if (space[na][nb][nc] == '*') {
                bomb_count++;
            }
        }
    }

    return bomb_count;
}
int main(void) {
    int n, result1 = 0, result2 = 0, x = 0;
    int aa[MAX_N * MAX_N], bb[MAX_N * MAX_N], cc[MAX_N * MAX_N];
    scanf("%d", &n);
    char space[n+5][n+5][n+5];
    int a1, b1, c1;
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            for (int c = 1; c <= n; c++) {
                scanf(" %c", &space[a][b][c]);
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
                if (space[a][b][c] >= '1' && space[a][b][c] <= '6') {
                    int bomb_count = count_bombs(a, b, c, space, n);
                    if (bomb_count != (space[a][b][c] - '0')) {
                        result1 = 1;
                    }
                    space[a1][b1][c1] = '*';
                    bomb_count = count_bombs(a, b, c, space, n);
                    if (bomb_count != (space[a][b][c] - '0')) {
                        aa[x] = a;
                        bb[x] = b;
                        cc[x] = c;
                        x++;
                        result2 = 1;
                    }
                    space[a1][b1][c1] = '?';
                }
            }
        }
    }
    if (result1 + result2 == 2) {
        printf("invalid\n");
        for (int i = 0; i < x; i++) {
            printf("%d %d %d\n", aa[i], bb[i], cc[i]);
        }
    } else {
        printf("valid\n");
        if (result1 == 0) {
            int bomb_count = count_bombs(a1, b1, c1, space, n);
            printf("%c", '0' + bomb_count);
        } else {
            printf("*");
        }
    }
    return 0;
}