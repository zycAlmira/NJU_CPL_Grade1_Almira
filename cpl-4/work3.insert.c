//
// Created by 61760 on 24-10-17.
//
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#define MAX_LEN 10000
#define RANGE 10
int main(void) {
    int numbers[MAX_LEN] = { 0 };
    int size =0;
    srand(time(NULL));
    size=rand() % RANGE;
    for(int i=0;i<size;i++){
       printf("%d",numbers[i]);
    }
    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % RANGE;
    }
    for(int i=1;i<size;i++){

    }
    for(int i=0;i<size;i++){
        printf("%d",numbers[i]);
    }
    return 0;
}