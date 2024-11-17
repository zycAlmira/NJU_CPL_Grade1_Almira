#include <stdio.h>
#include <string.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char a, arr[200010]={0},input[100005],x;
        char* b=arr+100005;
        scanf("%s",input);
        for(x=0;x<strlen(input);x++){
            a=input[x];
            if(x==0){
                *b=a;
                continue;
            }
            if ((a - *b)<= 3 && a > *b) {
                b++;
            } else {
                b--;
                *b = a;
            }}
        if (*b== 0) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }
    return 0;
}