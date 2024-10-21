#include <stdio.h>
#include <stdlib.h>

int main() {
    char res[10] = {0};
    unsigned int guess = 2147483648, min = 0, max = 4294967295;
    int n = 0;

    while (n < 61) {
        printf("%u\n", guess);
        fflush(stdout);
        scanf("%s", res);
        switch (res[0]) {
            case 'G':
                max = guess - 1;
                break;
            case 'L':
                min = guess + 1;
                break;
            case 'E':
            case 'O':
                return 0;
        }
        guess = min/2 + max/2+1;
        n++;
    }
    return 0;
}
