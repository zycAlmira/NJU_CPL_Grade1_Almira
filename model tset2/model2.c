//
// Created by 61760 on 24-11-17.
//
#include <stdio.h>

int plus(int, int, int, int);

int cut(int, int, int, int);

int main() {
    int w, n, d, result = 0;
    scanf("%d %d %d", &w, &n, &d);
    int arr[1005];
    for (int i = 0; i < w; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= w / 2 - 1; i++) {
        if (arr[i] == arr[w - 1 - i]) {
            continue;
        }
        int count = 0;
        count = (plus(arr[i], n, d, arr[w - 1 - i]) > cut(arr[i], n, d, arr[w - 1 - i])) ? cut(arr[i], n, d,
                                                                                               arr[w - 1 - i]) : plus(
                arr[i], n, d, arr[w - 1 - i]);
        if (count > n + 1) {
            printf("Impossible");
            return 0;
        }
        result += count;
    }
    printf("%d", result);
    return 0;
}

int plus(int a, int n, int d, int b) {
    int count = 0;
    d = d %n;
    while (a != b) {
        a = (a + d) % n;
        if (a == 0) {
            a = n;
        }
        count++;
        if (count > n + 1) {
            break;
        }
    }
    return count;
}

int cut(int a, int n, int d, int b) {
    int count = 0;
    d = d % n;
    while (a != b) {
        a = (a + n  - d) % n;
        if (a == 0) {
            a = n;
        }
        count++;
        if (count > n + 1) {
            break;
        }
    }
    return count;
}