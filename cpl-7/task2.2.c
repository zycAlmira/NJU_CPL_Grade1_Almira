#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
bool is_Pair(char left, char right)
{
    return (left == '(' && right == ')') ||
           (left == '[' && right == ']') ||
           (left == '{' && right == '}');
}
bool isBalanced(char *s)
{
    int length = strlen(s);
    char *stack = (char *)malloc(length * sizeof(char));
    int top = -1;
    for (int i = 0; i < length; i++)
    {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{')
        {
            stack[++top] = c;
        }
        else if (c == ')' || c == ']' || c == '}')
        {
            if (top == -1 || !is_Pair(stack[top], c))
            {
                free(stack);
                return false;
            }
            top--;
        }
    }
    bool result = (top == -1);
    free(stack);
    return result;
}

int main() {
    int T;
    scanf("%d", &T);

    char s[100005];

    for (int i = 0; i < T; i++) {
        scanf("%s", s);
        printf("%s\n", isBalanced(s) ? "True" : "False");
    }

    return 0;
}
