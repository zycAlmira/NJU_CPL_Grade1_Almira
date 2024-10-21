//
// Created by 61760 on 24-10-10.
//
#include<stdio.h>
int main(void){
    int numbers[20],result[20];
    for(int i=0;i<5;i++){
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<5;i++){
        int min=0;
        if(min>numbers[i]){
            min=numbers[i];
            result[i]=min;
            numbers[i]=100;

        }
    }
    for(int i=0;i<5;i++){
        printf("%d",result[i]);
    }
    return 0;
}