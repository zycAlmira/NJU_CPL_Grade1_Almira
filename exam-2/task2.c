//
// Created by 61760 on 24-12-9.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int cats[1000005] = {'\0'};

int compare_ints(const void *a, const void *b) {
    return *(int*)a-*(int*)b;
}

int main() {
    int n, r, m, d, max;
    long long l;
    scanf("%d%d%d%d", &n, &r, &m, &d);
    for (int i = 0; i < n; i++) {
        scanf("%d", &cats[i]);
    }
    qsort(cats, n, sizeof(int), compare_ints);
    for (int i = n - 1; i >= 0; i--) {
        if (cats[i] < r) {
            max = i;
            break;
        }
    }
    if ((max + 1) < m) {
        printf("-1");
        return 0;
    }
    int lo = max - m + 1, sum = 0;
    l = cats[lo]-1;
    for (int i = max; i >=lo; i--) {
            sum += cats[i] - l;
    }
    if (sum >= d) {
        printf("%d", l);
        return 0;
    }
    int left=0,right=l,sub=sum;
    while (left!=right) {
        for (int i = lo-1; i >=0; i--) {
            if (cats[i] > l){
                sub += cats[i] - l;
            }else{
                if (sub >= d&&sub-max+i+1<d) {
                    printf("%d", l);
                    return 0;
                }else if(sub<d){
                    right=l;
                    l = (left+right)/2;
                    sub=sum;
                    break;
                }else{
                    left=l;
                    l = (left+right)/2;
                    sub=sum;
                    break;
                }
            }
    }
    }
    printf("-1");
    return 0;
}
