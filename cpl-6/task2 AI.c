//
// Created by 61760 on 24-11-2.
//
#include <stdio.h>

int main(void) {
    int n = 0, longestOne = -1, min = 10000, weizhi = 0, mid = 0;
    int number[10000] = {0}, l[20000] = {0};

    // 读取输入
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &number[i]);
        l[i] = n - i;
    }

    // 寻找 longestOne
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n - 1; j++) { // 修正边界条件
            if (number[j] > number[j + 1]) {
                if (j == n - 2) { // 此时j为倒数第二个元素
                    longestOne = i;
                }
            } else {
                break;
            }
        }
        if (longestOne == i) {
            break;
        }
    }

    // 寻找最小值
    for (int i = longestOne; i < longestOne + l[longestOne] && i < n; ++i) { // 添加边界检查
        if (longestOne > 0 && number[longestOne - 1] < number[i] && number[i] <= min) {
            min = number[i];
            weizhi = i;
        }
    }

    // 交换
    if (weizhi != 0) { // 确保 weizhi 有效
        mid = number[weizhi];
        number[weizhi] = number[longestOne - 1];
        number[longestOne - 1] = mid;
    }

    // 反转部分数组
    for (int i = 0; i < l[longestOne] / 2; ++i) {
        if (longestOne + i + 1 < n && n - i - 1 > longestOne) { // 确保索引有效
            mid = number[longestOne + i + 1];
            number[longestOne + i + 1] = number[n - i - 1];
            number[n - i - 1] = mid;
        }
    }

    // 输出结果
    for (int i = 0; i < n; ++i) {
        printf("%d ", number[i]);
    }
    return 0;
}
