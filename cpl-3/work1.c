//
// Created by 61760 on 24-10-10.
//
#include<stdio.h>
int main(void){
     int n;
     scanf("%d",&n);
     for(int i=0;i<n;i++) {
         for (int j = 1; j <=n - i+1;
         j++)
         {
             printf(" ");
         }
         for (int j = 1; j <= 2 * i +1; j++)
         {printf("*");
     }
         printf("\n");
         }
     return 0;
}