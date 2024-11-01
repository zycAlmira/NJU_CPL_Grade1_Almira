//
// Created by 61760 on 24-10-25.
//
#include <stdio.h>
#include <ctype.h>
int main(){
    char alphabet[1000]={0};
    int length=0;
    scanf("%d\n",&length);
    for(int i=1;i<=length;i++){
        scanf("%c",&alphabet[i]);
        if('a'<=alphabet[i]&&'z'>=alphabet[i]){
            alphabet[i]=;
        }else if('A'<=alphabet[i]&&'Z'>=alphabet[i]){
            alphabet[i]-='A'-'a';
        }
    }
    for(int i=length;i>=1;i++){
        printf("%c",alphabet[i]);
    }

    return 0;
}