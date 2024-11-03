#include <stdio.h>
int main(void){
    int n,number[1000]={0},lo=0,temp=0;
    scanf("%d\n",&n);
    for (int i = 0; i <n ; ++i) {
        scanf("%d",&number[i]);}
    for (int i=n-1;i>=0;--i){
        for (int j = i; j <n; ++j) {
            if(number[j+1]>number[j]){break;}
            if(j==n-1){
                lo=i;
                break;
            }
        }
    }
    temp=number[lo-1];
    for(int i=n-1;i>=lo;i--){
        if(number[i]>number[lo-1]){
            number[lo-1]=number[i];
            number[i]=temp;
            break;
        }
    }
    for (int i =0; i <(n-lo)/2; ++i) {
        temp=number[i+lo];
        number[i+lo]=number[n-1-i];
        number[n-1-i]=temp;
    }
    for (int i = 0; i <n ; ++i) {
        printf("%d ",number[i]);
    }
}
