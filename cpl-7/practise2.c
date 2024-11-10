//
// Created by 61760 on 24-11-9.
//
#include <stdio.h>
int main(void){
    int a,b,c,d=1,x1,x2,y1,y2;
    int temp=0;
    char x;
    scanf("%d%d%d",&a,&b,&c);
    x1=a;
    x2=0;
    y1=b;
    y2=0;
    getchar();
    while(d){
       x=getchar();
       switch (x){
           case 'A':
               y2-=c;
               y1-=b;
               temp=c;
               c=b;
               b=temp;
               break;
           case 'W':
               x2-=c;
               x1-=a;
               temp=c;
               c=a;
               a=temp;
               break;
           case 'S':
               x2+=a;
               x1+=c;
               temp=c;
               c=a;
               a=temp;
               break;
           case 'D':
               y2+=b;
               y1+=c;
               temp=c;
               c=b;
               b=temp;
               break;
           case '\n':d=0;
       }
    }
    printf("%d %d %d %d",x2,x1,y2,y1);
    return 0;
}