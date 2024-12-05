//太简单了,懒得写







//算了还是写吧,反正很快
#include <stdio.h>
#include <string.h>
int main(){
    char j[100]={0};
    scanf("%s",j);
    for(int i=0;i<strlen(j);i++) {
        if ((j[i] >= 'a' && j[i] <= 'z')||((j[i] >= 'A' && j[i] <= 'Z'))) {
            printf("%c", j[i]);
        }
    }
    return 0;
}