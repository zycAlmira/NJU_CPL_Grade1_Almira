//
// Created by 61760 on 24-10-10.
//
#include<stdio.h>
int main(void){
    int n,number[100];
    int low=0;
    int high=99;
    scanf("%d",&n);
    for(int i=0;i<100;i++)
    {
        number[i]=i;
    }
   while(low<=high){
       int index,mid;
       mid=(low+high)/2;
       if (number[mid] == n) {
           index = mid;
           printf("%d", index);
           break;
       }
       else if (number[mid] > n) {
               high = mid - 1;
           }
       else {
               low = mid + 1;
           }
       }
    return 0;
}