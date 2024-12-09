#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *a, const void *b) {
    return strcmp(*(char **)a, *(char **)b);
}
char arr[10005] = {0}, s[2] = {0};
int main() {
    scanf("%s", arr);
    scanf("%s", s);
    char *token;
    char **p = (char **)malloc(100 * sizeof(char *));
    for (int i = 0; i < 100; i++) {
        p[i] = (char *)malloc(100 * sizeof(char));
    }
    int i = 0;
    token = strtok(arr, s);
    while (token != NULL) {
        p[i] = token;
        i++;
        token = strtok(NULL, s);
    }
    qsort(p, i, sizeof(char *), compare);
    for (int j = 0; j < i; j++) {
        printf("%s\n", p[j]);
    }
    free(p);
    return 0;
}



