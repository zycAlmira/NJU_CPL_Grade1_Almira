//
// Created by 61760 on 24-10-8.
//
#include<stdio.h>
int main(void){
    int n,total=1,result=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       for(int b=1;b<=i;b++){
           total=(b*total)%10007;
       }
       total=total%10007;
       result=result+total;
       total=1;
       result=result%10007;
    }
    printf("%d",result);
    return 0;
}