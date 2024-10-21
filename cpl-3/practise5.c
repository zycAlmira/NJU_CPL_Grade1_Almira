//
// Created by 61760 on 24-10-12.
//
#include <stdio.h>
#include <math.h>
int main(void) {
    int len,N,result=0,j=1;
    char s[1000];
    scanf("%d%d\n",&len,&N);
    for(int i=1;i<=len;i++){
        scanf("%1c",&s[i]);
        if(s[i]>=65){
           s[i]=s[i]+10-'A';
        }else{
            s[i]=s[i]-48;
        }
        result+=s[i]*pow(N,len-i);
    }
    while(j<=len){
        if(s[j]>=N){
            printf("Error");
            break;
        }
        if(j==len){
            printf("%d",result);
        }
        j=j+1;
    }

    return 0;
}