#include <stdio.h>
int main(void){
    int n,m,t,d,min=1000000000,mid,b=1;
    int N[1000005],M[1000005];
    scanf("%d%d%d",&n,&m,&t);
    for(int i=1;i<=n;++i){
        scanf("%d",&N[i]);
    }
    for(int i=0;i<m;++i){
        scanf("%d",&M[i]);
    }
    for(int i=0;i<m;i++){
        int mid=n/2;
        while(b) {
            if ((t - N[mid] - M[i]) < 0) {
                mid = (mid + 1) / 2;
                continue;
            } else if ((t - N[mid] - M[i]) == 0) {
                b=0;
            } else if ((t - N[mid] - M[i]) > 0) {
                if((t - N[mid] - M[i])<min){

                }
            }
            if
        }
    }
    if(min==2000000000){
        printf("-1");
    }
    else{
        printf("%d",min);
    }
    return 0;
}