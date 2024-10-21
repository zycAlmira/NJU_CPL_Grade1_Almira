#include <stdio.h>

int main(void) {
    int x, ans;
    for (scanf("%d", &x); scanf("%d", &x) != EOF; ans ^= x);

    return 0;
}
