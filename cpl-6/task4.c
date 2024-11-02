//
// Created by 61760 on 24-11-2.
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void prints(int number);
int main(){
    long long n,a,c;
    int b=0;
    scanf("%lld",&n);
    a=n;
    if(n<0){
        printf("minus ");
        n= llabs(n);
        a= llabs(n);
    }
    printf("%lld",n);
    while (n){
        n/=1000;
        b++;
    }
    if(a==0) {
        printf("zero");
    }
    for(int i=b;i>0;i--){
        c=a/pow(1000,i-1);
        a=a-c*pow(1000,i-1);
        prints(c);
        if(c==0){
            continue;
        }
        switch (i-1) {
            case 1:printf(" thousand ");break;
            case 2:printf(" million ");break;
            case 3:printf(" billion ");break;
        }
    }
    return 0;
}
void prints(int n){
    int a,b,c,d;
    a=n/100;
    c=n%10;
    d=n%100;
    b=d/10;
    switch (a) {
        case 1:printf("one hundred");
            break;
        case 2:printf("two hundred");
            break;
        case 3:printf("three hundred");
            break;
        case 4:printf("four hundred");
            break;
        case 5:printf("five hundred");
            break;
        case 6:printf("six hundred");
            break;
        case 7:printf("seven hundred");
            break;
        case 8:printf("eight hundred");
            break;
        case 9:printf("nine hundred");
            break;
    }
    if((a>0)&&((b!=0)||(c!=0))){
        printf(" and ");
    }
    switch (b) {
        case 2:printf("twenty");
            break;
        case 3:printf("thirty");
            break;
        case 4:printf("forty");
            break;
        case 5:printf("fifty");
            break;
        case 6:printf("sixty");
            break;
        case 7:printf("seventy");
            break;
        case 8:printf("eighty");
            break;
        case 9:printf("ninety");
            break;
    }
    if(b>1&&c>0){
        printf("-");
    }
    if(d>=20){
        switch (c) {
            case 1:printf("one");
                break;
            case 2:printf("two");
                break;
            case 3:printf("three");
                break;
            case 4:printf("four");
                break;
            case 5:printf("five");
                break;
            case 6:printf("six");
                break;
            case 7:printf("seven");
                break;
            case 8:printf("eight");
                break;
            case 9:printf("nine");
                break;}}
    else{
        switch (d){
            case 1:printf("one");
                break;
            case 2:printf("two");
                break;
            case 3:printf("three");
                break;
            case 4:printf("four");
                break;
            case 5:printf("five");
                break;
            case 6:printf("six");
                break;
            case 7:printf("seven");
                break;
            case 8:printf("eight");
                break;
            case 9:printf("nine");
                break;
            case 10:printf("ten");
                break;
            case 11:printf("eleven");
                break;
            case 12:printf("twelve");
                break;
            case 13:printf("thirteen");
                break;
            case 14:printf("fourteen");
                break;
            case 15:printf("fifteen");
                break;
            case 16:printf("sixteen");
                break;
            case 17:printf("seventeen");
                break;
            case 18:printf("eighteen");
                break;
            case 19:printf("nineteen");
                break;}
    }
}