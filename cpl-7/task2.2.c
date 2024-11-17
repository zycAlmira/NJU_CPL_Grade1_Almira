#include <stdio.h>
#include <stdlib.h>
#define MAX_INPUT_LEN 100005
int main(void) {
    int n, num = 1;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        char input[MAX_INPUT_LEN] = {0};
        int num_elements = 0;
        char first_char = '\0';
        while (1) {
            char a = getchar();
            if (a == '\n' || a == EOF) {
                break;
            }
            if (num_elements == 0 || abs(a - first_char) > 2 || a < first_char) {
                if (num_elements > 0) {
                    for (int j = num_elements - 1; j > 0; --j) {
                        input[j] = input[j - 1];
                    }
                }
                input[0] = a;
                num_elements++;
                first_char = a;
            } else {
                num_elements--;
                if (num_elements > 0) {
                    first_char = input[0];
                }
            }
        }

        if (num_elements == 0) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }

    return 0;
}

