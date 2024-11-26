#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main(void) {
    char *T = (char *) malloc(100005 * sizeof(char)), *S = (char *) malloc(100005 * sizeof(char));
    scanf("%s%s",S,T);
    int len1 = strlen(S), len2 = strlen(T);
    for (int i = 0; i < len1; i++) {
        if (*(S + i) == *T) {
            for (int j = 1; j <=len2; j++) {
                if (*(S + i + j )== *(T + j)) { ;
                } else { break; }
                if (j == len2 - 1) {
                    printf("%d ", i);
                }
            }
        }
    }
    return 0;
}