#include <stdio.h>
int main(void) {
    int n,k,b,life,left=0,p=1,kill=0,people[10000]={0};
    scanf("%d%d%d%d",&n,&k,&b,&life);
    left=b;
    while(kill<n*life-1)
    {
        for(int i=0;i<=n-1;i++)
        {
            if(p%k!=0&&people[i]<life) {
                p=p+1;
            }else if(p%k==0&&people[i]<life&&left!=0)  {
                people[i]+=1;
                p=1;
                kill=kill+1;
                left--;
            }else if(people[i]==life){
                continue;
            }else if(p%k==0&&people[i]<life&&left==0){
                p=1;
                left=b;
            }
        }
    }
    for(int i=0;i<=n-1;i++){
        if(people[i]<life){
            printf("%d",i+1);
        }
    }
    return 0;
}