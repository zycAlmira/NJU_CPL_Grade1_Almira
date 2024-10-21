//
// Created by 61760 on 24-10-18.
//
#include <stdio.h>
#include <string.h>
int main(void) {
    int n,length;
    char world[10020]={0},new_world[10020]={0};
    scanf("%d\n", &n);
    scanf("%s",&world[3]);
    length= strlen(world);
    for(int i=3;i<=length;i++){
        new_world[i]=world[i];
        }
    for(int m=0;m<n;m++){
    for(int i=3;i<=length;i++){
        int a=0,b=0;
        for(int j=i-3;j<=i+3;i++){
            if(j==i){
                continue;
            }
            if(world[j]=='A'){
                a++;
            }else if(world[j]=='B'){
                b++;
            }
        }
        if(world[i]=='A'){
            if(a<2||(a>4||b>0)){
                new_world[i]='.' ;
            }
            }
        else if(world[i]=='B'){
            if(b<2||(b>4||a>0)){
                new_world[i]='.' ;
            }
            }
        else if(world[i]=='.'){
            if((a>1&&a<5)&&b==0){
                new_world[i]='A';
            }else if((b>1&&b<5)&&a==0){
                new_world[i]='B';
            }
        }
    }
    for(int i=3;i<=length;i++){
        world[i]=new_world[i];
    }
    }
    for(int i=3;i<=100;i++) {
        printf("%c", new_world[i]);
    }
    return 0;
}