#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[3002][3002]={'\0'};
void up(char *p,int a,int b);
void down(char *p,int a,int b);
void left(char *p,int a,int b);
void right(char *p,int a,int b);
int main(){
   char *p=&(s[0][0]);
   p+=35;
   int a,b;
   scanf("%d %d",a,b);
   printf("%d",((p-(&s[0][0]))/a));
   return  0;
}
