//
// Created by 61760 on 24-10-14.
//
#include <stdio.h>
#include <math.h>
int main(void) {
    int n;
    int T[10005]={0},m[10000]={0};
    scanf("%d\n", &n);
    for (int i = 1; i <= n; i++) {
        char Z[10005] ={0};
        int len=0,tran[10005]={0};
        for(int a=0;a<=15;a++){
            scanf("%c", &Z[a]);
            if(Z[a]==49||Z[a]==48){
                tran[a]=Z[a]-48;
                len++;
            }else if(Z[a]==90){
                tran[a]=-1;
                len++;
            }
            if(Z[a]>49&&Z[a]<90){
                m[i]=1;
            }

            if(Z[a]==10){
                break;
            }
        }
        for(int a=0;a<=len;a++){
            T[i]+=tran[a]*pow(3,len-a-1);
        }
    }
    for (int i = 1; i <= n; i++) {
        if(m[i]==1){
            printf("Radix Error\n");
        }else{
            printf("%d\n", T[i]);
        }

    }
    return 0;
}