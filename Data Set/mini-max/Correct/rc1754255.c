#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int sum1=0;
    long int sum2=0;
    long int sum3=0;
    long int sum4=0;
    long int sum5=0;
    long int maximum=0;
    long int minimum=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum1=b+c+d+e;
    sum2=a+c+d+e;
    sum3=a+b+d+e;
    sum4=a+b+c+e;
    sum5=a+b+c+d;
    if(sum1>=sum2&&sum1>=sum3&&sum1>=sum4&&sum1>=sum5){maximum=sum1;}
    if(sum2>=sum1&&sum2>=sum3&&sum2>=sum4&&sum2>=sum5){maximum=sum2;}
    if(sum3>=sum1&&sum3>=sum2&&sum3>=sum4&&sum3>=sum5){maximum=sum3;}
    if(sum4>=sum2&&sum4>=sum3&&sum4>=sum1&&sum4>=sum5){maximum=sum4;}
    if(sum5>=sum2&&sum5>=sum3&&sum5>=sum4&&sum5>=sum1){maximum=sum5;}
    if(sum1<=sum2&&sum1<=sum3&&sum1<=sum4&&sum1<=sum5){minimum=sum1;}
    if(sum2<=sum1&&sum2<=sum3&&sum2<=sum4&&sum2<=sum5){minimum=sum2;}
    if(sum3<=sum1&&sum3<=sum2&&sum3<=sum4&&sum3<=sum5){minimum=sum3;}
    if(sum4<=sum2&&sum4<=sum3&&sum4<=sum1&&sum4<=sum5){minimum=sum4;}
    if(sum5<=sum2&&sum5<=sum3&&sum5<=sum4&&sum5<=sum1){minimum=sum5;}
    printf("%ld %ld",minimum,maximum);
   // printf("%ld",minimum);
    return 0;
}
