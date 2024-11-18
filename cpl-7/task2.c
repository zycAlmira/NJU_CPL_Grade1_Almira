#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char input[100005];
        scanf("%s", input);
        int length = strlen(input);
        char *stack = (char *) malloc(length * sizeof(char));
        int top = -1;
        for (int x = 0; x < length; x++) {
            char a = input[x];
            if (a == '(' || a == '[' || a == '{') {
                stack[++top] = a;
            } else if (a == ')' || a == ']' || a == '}') {
                if (top == -1 || (a == ')' && stack[top] != '(') || (a == ']' && stack[top] != '[') ||
                    (a == '}' && stack[top] != '{')) {
                    free(stack);
                    printf("False\n");
                    break;
                } else {
                    top--;
                }
            }
            if (x == length - 1) {
                if (top == -1) {
                    printf("True\n");
                } else {
                    printf("False\n");
                }
                free(stack);
            }
        }

    }
    return 0;
}