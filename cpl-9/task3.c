//
// Created by 61760 on 24-12-8.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[25] = {0};

void magicsort(int **a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][1] < a[j][1]) {
                int temp = a[i][0];
                a[i][0] = a[j][0];
                a[j][0] = temp;
                temp = a[i][1];
                a[i][1] = a[j][1];
                a[j][1] = temp;
            }
        }
    }
}
int main() {
    char arr[2000][25] = {0};
    int **atk = (int **)malloc(2000 * sizeof(int *));
    int **def = (int **)malloc(2000 * sizeof(int *));
    int **str = (int **)malloc(2000 * sizeof(int *));
    for (int i = 0; i < 2000; i++) {
        atk[i] = (int *)malloc(2 * sizeof(int));
        def[i] = (int *)malloc(2 * sizeof(int));
        str[i] = (int *)malloc(2 * sizeof(int));
    }
    int n, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
        atk[i][0] = i;
        def[i][0] = i;
        str[i][0] = i;
        for (int h = 0; h < 11; h++) {
            scanf("%s", name);
            scanf("%d", &temp);
            atk[i][1] += temp;
            scanf("%d", &temp);
            def[i][1] += temp;
            scanf("%d", &temp);
            str[i][1] += temp;
        }
    }
    magicsort(atk, n);
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[atk[i][0]]);
    }
    printf("\n");
    magicsort(def, n);
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[def[i][0]]);
    }
    printf("\n");
    magicsort(str, n);
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[str[i][0]]);
    }
    return 0;
}
