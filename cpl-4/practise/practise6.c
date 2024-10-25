//
// Created by 61760 on 24-
#include <stdio.h>
int main(void) {
    int tab[100][100] = {0};
    int a[100] = {0}, d;
    for (int i = 1; i <= 6; i++) {
        scanf("%d", &a[i]);
    }
    tab[a[5]][a[6]] = 1;
    d = a[3] + a[4] - a[1] - a[2];
    d=d>0?d:(-d);
    printf("%d\n", d);
    for (int i = 1; i <= d; i++) {
        if (a[3] - a[1] > 0) {
            if (tab[a[1] + 1][a[2]] == 0) {
                a[1] = a[1] + 1;
                printf("R");
                continue;
            }
        } else if (a[3] - a[1] < 0) {
            if (tab[a[1] - 1][a[2]] == 0) {
                a[1] = a[1] - 1;
                printf("L");
                continue;
            }
        } else if (a[4] - a[2] > 0) {
            if (tab[a[1]][a[2]+1] == 0) {
                a[2] = a[2] - 1;
                printf("U");
                continue;
            }
        } else if (a[4] - a[2] < 0) {
            if (tab[a[1]][a[2]-1] == 0) {
                a[2] = a[2] - 1;
                printf("D");
                continue;
            }
        }

    }
    return 0;
}