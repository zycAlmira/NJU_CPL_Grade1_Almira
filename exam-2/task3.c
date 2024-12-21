#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char output[50000005] = {'\0'};

bool delete(char *input);
void add(char *x, char *right);

int main() {
    char **input = malloc(405 * sizeof(char*));
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        input[i] = malloc(1000005 * sizeof(char));
    }
    for (int i = 0; i < n; i++) {
        scanf("%s", input[i]);
    }
    scanf("%s", output);

    int i = 0;
    while (i != n) {
        if (delete(input[i])) {
            i = 0;
        } else {
            i++;
        }
    }
    printf("%s", output);
    return 0;
}

bool delete(char *input) {
    char *sub = malloc(1000005 * sizeof(char));
    strcpy(sub, input + 2);

    char *left = strtok(sub, "]");
    char *right = strtok(NULL, "]");

    char *x = strstr(output, left);
    unsigned long long l = strlen(left);

    switch (input[0]) {
        case '.':
            if (x != NULL) {
                memmove(x, x + l, (strlen(x) - l ) );
                add(x, right);
                free(sub);
                return 1;
            }
            break;
        case '^':
            if (x == output) {
                memmove(x, x + l, (strlen(x) -l ));
                add(x, right);
                free(sub);
                return 1;
            }
            break;
        case '$':
            if (x == output + strlen(output) - l) {
                memset(x, '\0', l );
                add(x, right);
                free(sub);
                return 1;
            }
            break;
    }
    free(sub);
    return 0;
}

void add(char* x, char *right) {
    char *sub = right + 2;
    unsigned long long r = strlen(sub);
    switch (right[0]) {
        case '.':
            memmove(x + r, x, strlen(x));
            for (int i = 0; i < r; i++) {
                x[i] = sub[i];
            }
            break;
        case '^':
            unsigned long long o = strlen(output);
            memmove(output + r, output, o);
            for (int i = 0; i < r; i++) {
                output[i] = sub[i];
            }
            break;
        case '$':
            strcat(output , sub);
            break;
    }
}
1
.[ab].[bcsfs]
abbc
1
$[bc].[absfs]
abbc
1
.[bc]^[absfs]
abbc
1
.[bc]$[absefes]
abbc
1
^[ab]^[bcsgs]
abbc
1
^[ab]$[bcfaef]
abbc