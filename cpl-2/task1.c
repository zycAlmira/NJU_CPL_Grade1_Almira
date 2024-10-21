//
// Created by 61760 on 24-10-2.
//
#include<stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a*a+b*b;
    if(a+b<=c){
        printf("not triangle");
    }else if(a==b&&b==c){
        printf("equilateral triangle");
    }else if(d==(c*c)){
        printf("right triangle");
    }else if(d>c*c){
        printf("acute");
        if(a==b||b==c){
            printf(" isosceles");
        }
        printf(" triangle");
    }else if(d<c*c){
        printf("obtuse");
        if(a==b||b==c){
            printf(" isosceles");
        }
        printf(" triangle");
    }
    return 0;
}
