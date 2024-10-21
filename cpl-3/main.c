#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int n; // 开在全局变量中会自动初始化为 0
int main(void) {
    scanf("%d", &n);
    while (n--) { // 使用这种简易写法，读入 n 组数据（因为 n 在过程中并不重要，当 n 减为 0 时循环自动结束）
        char ter[20] = ""; // 记得字符串数组要多开几位，并且初始化
        bool flag = true; // 使用 bool 值（其实就是 1 和 0）来标记是否出现了非法字符
        scanf("%s", ter); // 并不需要使用 getchar() 来读入换行符，也不要用 gets() 之类的函数
        int len = (int)strlen(ter);
        int dec = 0; // 记得初始化，用于储存最终的十进制数 decimal number
        for (int i = 0; i < len; i++) { // 从左到右遍历字符串
            if (ter[i] != 'Z' && ter[i] != '0' && ter[i] != '1') { // 判断是否出现了非法字符
                printf("Radix Error\n"); // 注意错误信息后面要带有换行符
                flag = false; // 出现了非法字符，标记为 false
                break; // 跳出循环，并非直接结束程序
            }
            dec *= 3; // 从左到右遍历，每次乘 3
            if (ter[i] == 'Z') {
                dec--; // 如果是 Z，就减 1
            } else {
                dec += ter[i] - '0'; // 这里的减法要减去字符 '0' 的大小
            }
        }
        if (flag) { // 如果没有出现非法字符，就输出十进制数
            printf("%d\n", dec);
        }
    }
    return 0;
}
