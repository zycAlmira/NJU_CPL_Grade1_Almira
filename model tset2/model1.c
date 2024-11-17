//
// Created by 61760 on 24-11-17.
//
#include <stdio.h>
#include <string.h>
int main(void){
    char c[10240]={0};
    scanf("%s",&c);
    printf("%c",c[0]);
    for(int i=1;i<strlen(c);i++){
        if(c[i]>='A'&&c[i]<='Z'){
            c[i]=c[i]+32;
            printf(" ");
        }
        printf("%c",c[i]);
    }
    return 0;
}
