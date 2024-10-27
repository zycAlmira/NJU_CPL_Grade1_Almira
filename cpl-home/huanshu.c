//
// Created by 61760 on 24-10-27.
//
#include<stdio.h>
void nprint(int n,char s[]);
int main(void){
    char s[1000]={0};
    scanf("%s",&s);
    nprint(5,s);
    return 0;
}
void nprint(int n,char s[]){
    for(int i=1;i<=n;i++){
        printf("%s\n",s);
    }
}