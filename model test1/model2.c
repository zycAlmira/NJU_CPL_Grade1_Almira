#include <stdio.h>
int main(){
    int t=0,x=0;
    scanf("%d%d",&t,&x);
    for(int turn=1;turn<=t;turn++){
        int n=0,result=0,winner[100]={0};
        scanf("%d",&n);
        int alphabet[11][11]={0};
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                scanf("%d",&alphabet[i][j]);
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(alphabet[i][j]==0){
                    continue;
                }
                for(int g=1;g<=x-1;g++) {
                    if (alphabet[i][j] == alphabet[i][j + g]) { ; } else {
                        break;
                    }
                    if (g == x - 1) {
                        result = alphabet[i][j];
                        winner[alphabet[i][j]]=1;
                    }
                }
                for(int g=1;g<=x-1;g++) {
                    if (alphabet[i][j] == alphabet[i+g][j]) { ; } else {
                        break;
                    }
                    if (g == x - 1) {
                        result = alphabet[i][j];
                        winner[alphabet[i][j]]=1;
                    }
                }
                for(int g=1;g<=x-1;g++) {
                    if (alphabet[i][j] == alphabet[i+g][j + g]) { ; } else {
                        break;
                    }
                    if (g == x - 1) {
                        result = alphabet[i][j];
                        winner[alphabet[i][j]]=1;
                    }
                }
                for(int g=1;g<=x-1;g++) {
                    if (alphabet[i][j] == alphabet[i-g][j + g]) { ; } else {
                        break;
                    }
                    if (g == x - 1) {
                        result = alphabet[i][j];
                        winner[alphabet[i][j]]=1;
                    }
                }
            }}
        if(winner[1]+winner[2]+winner[4]==1){
            printf("%d\n",result);}
        else {
            printf("draw\n");
        }
    }
    return 0;
}
