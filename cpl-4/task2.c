//
// Created by 61760 on 24-10-18.
//
#include <stdio.h>

int main(void) {
    int n,number[100],a=-1,b=0,c=0;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&number[i]);
        if(number[i]==1){
            number[i]=0;
        }else if(number[i]==2){
            number[i]=0;
        }else if(number[i]==4){
            number[i]=0;
        }else if(number[i]==5){
            number[i]=0;
        }else if(number[i]==6){
            number[i]=0;
        }else if(number[i]==8){
            number[i]=0;
        }else if(number[i]==9){
            number[i]=0;
        }else if(number[i]==10){
            number[i]=0;
        }else if(number[i]==11){
            number[i]=0;
        }else if(number[i]==12){
            number[i]=0;
        }else if(number[i]==13){
            number[i]=0;
        }else if(number[i]==17){
            number[i]=0;
        }
        a=a&number[i];
        b=b|number[i];
        c=c^number[i];
      }
    printf("%d %d %d",a,b,c);
    return 0;
}