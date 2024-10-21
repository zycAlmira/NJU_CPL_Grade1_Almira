//
// Created by 61760 on 24-10-8.
//
#include<stdio.h>
int main(void){
    int n,d,e,result;
    int a,b,c,max,m1,m2,min,mid;
    scanf("%d",&n);
    a=n/100;
    b=(n%100)/10;
    c=n%10;
    m1=(a>b)?a:b;
    m2=a+b-m1;
    max=(c>m1)?c:m1;
    min=(c<m2)?c:m2;
    d=max-min;
    e=n-99*d;
    if(e<0){
        e=0;
    }
    switch(d){
        case 2:result=e+99*(3);
               break;
        case 3:result=2*99+e;
            break;
        case 4:result=1*99+e;
            break;
        case 5:result=e;
               break;
        case 6:result=(1)*99+e;
            break;
        case 7:result=(2)*99+e;
            break;
        case 8:result=(3)*99+e;
            break;
        case 9:result=(4)*99+e;
            break;
    }
    printf("%d",result);
    return 0;
}