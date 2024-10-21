//
// Created by 61760 on 24-10-14.
//
#include <stdio.h>
int main(void) {
    int n,k,p=1,kill=0,people[10000]={0};
    scanf("%d%d",&n,&k);
    while(kill<n-1)
    {
    for(int i=1;i<=n;i++)
        {
        if(p%k!=0&&people[i]==0) {
            p = p+1;
        }else if(p%k==0&&people[i]==0)  {
            people[i]=1;
            p=p+1;
            kill=kill+1;
        }else if(people[i]==1){
            continue;
        }
        }
    }
    for(int i=1;i<=n;i++){
        if(people[i]==0){
            printf("%d",i);
        }
    }
    return 0;
}