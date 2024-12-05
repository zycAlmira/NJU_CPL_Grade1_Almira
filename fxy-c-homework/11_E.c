//
// Created by 61760 on 24-12-5.
//
#include <stdio.h>
#include <string.h>
int main() {
    char a[1000],*alphabet[1]={"abcdefghijklmnopqrstuvwxyz"},b[26]={0};
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        for(int j=0;j<26;j++){
            if(a[i]==alphabet[0][j]){
                b[j]++;
            }
        }
    }
    for(int i=0;i<26;i++){
        if(b[i]==0)
            continue;
        printf("%c:%d ",alphabet[0][i],b[i]);
    }
}