//
// Created by 61760 on 24-10-18.
//
#include <stdio.h>

int main(void) {
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    printf("%d\n",a&b);
    printf("%d\n",a|b);
    printf("%d\n",a^b);
    printf("%d\n",~a);
    printf("%d\n",a<<b);
    printf("%d\n",a>>b);
    int cnt = 0;
    while (a) {
        cnt += a & 1;
        a >>= 1;
    }
    int x=a>>b;
    printf("%d\n",x&1);
    printf("%d\n",cnt);
    return 0;
}