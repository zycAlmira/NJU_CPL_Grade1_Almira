//
// Created by 61760 on 24-10-9.
//
#include <stdio.h>
int main(void)
{
    int n;
    int numbers[100005] = {0};
    int nu[100000]= {0};
    scanf("%d\n",&n);
    for (int i = 0; i < (2*n)-1; i++){
        scanf("%d",&numbers[i]);
        nu[numbers[i]]=nu[numbers[i]]+1;
    }
    for (int j=0;j<(2*n)-1;j++){
        if (nu[numbers[j]]==1)
        {
            printf("%d",numbers[j]);
            break;
        }
    }
    return 0;
}