//
// Created by 61760 on 24-11-11.
//
#include <stdio.h>
int main(void) {
    int n, L, wine[10010], max[10010], value = 0, b = 0;
    scanf("%d%d", &n, &L);
    for (int i = 0; i < n; i++) {
        scanf("%d", &wine[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &max[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (wine[j] < wine[j + 1]) {
                int temp = wine[j];
                wine[j] = wine[j + 1];
                wine[j + 1] = temp;

                temp = max[j];
                max[j] = max[j + 1];
                max[j + 1] = temp;
            }
        }
    }
    while (b < n && L > 0) {
        int usedWine = (L > max[b]) ? max[b] : L;
        value += wine[b] * usedWine;
        L -= usedWine;
        b++;
    }
    printf("%d\n", value);
    return 0;
}
