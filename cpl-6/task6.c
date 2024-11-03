#include <stdio.h>
#define ma 2000000000
int main(void){
    int n,m,t,result=ma,max,min,mid;
    int N[1000005],M[1000005];
    scanf("%d%d%d",&n,&m,&t);
    for(int i=1;i<=n;i++){
        scanf("%d",&N[i]);
    }
    for(int i=0;i<m;++i){
        scanf("%d",&M[i]);
    }
    for(int i=0;i<m;++i){
        max=n;
        min=1;
        mid=(max+min)/2;
        while(min<=max){
            if(t-N[mid]-M[i]>=0){
                result=(result<(t-N[mid]-M[i]))?result:(t-N[mid]-M[i]);
                min=mid+1;
                mid=(max+min)/2;
            }else{
                max=mid-1;
                mid=(max+min)/2;
            }
        }
    }
    if(result==ma){
        result=-1;
    }
    printf("%d",result);
    return 0;
}