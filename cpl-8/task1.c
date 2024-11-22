#include <stdio.h>
int main() {
    int num;
    scanf("%x",&num);
    printf("%d\n",num);
    unsigned int unsigned_ = num;
    printf("%u\n",unsigned_);
    float *float_ = (float *) &num;
    printf("%.6f\n",*float_);
    printf("%.3e\n",*float_);
    return 0;
}