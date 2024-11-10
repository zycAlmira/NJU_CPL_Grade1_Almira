//
// Created by 61760 on 24-11-9.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        char a,input[1000]={0};
        while((a=getchar())!='\n'){
            if(abs(a-input[0])<=2&&a>input[0]){
                for(int j=0;j<sizeof(input);j++)
                {input[j]=input[j+1];}
                }
            else{
                for(int j=sizeof(input);j>0;j--){
                    input[j]=input[j-1];
                }
                input[0]=a;
                }
            }
        if(input[0]==0){
            printf("True\n");
        }else{
            printf("False\n");;
        }
        memset(input,0,sizeof input);
        }
    return 0;
}
