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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int sum1=a+b+c+d;
     long long int sum2=a+b+c+e;
     long long int sum3=e+b+c+d;
     long long int sum4=a+e+c+d;
     long long int sum5=a+b+e+d;
    long long int max,min;
    if(sum1<=sum2&&sum1<=sum3&&sum1<=sum4&&sum1<=sum5)
       {
        min=sum1;
       }
    if(sum2<=sum1&&sum2<=sum3&&sum2<=sum4&&sum2<=sum5)
       {
        min=sum2;
       }
    if(sum3<=sum2&&sum3<=sum1&&sum3<=sum4&&sum3<=sum5)
       {
        min=sum3;
       }
    if(sum4<=sum2&&sum4<=sum3&&sum4<=sum1&&sum4<=sum5)
       {
        min=sum4;
       }
    if(sum5<=sum2&&sum5<=sum3&&sum5<=sum4&&sum5<=sum1)
       {
        min=sum5;
       }
    if(sum1>=sum2&&sum1>=sum3&&sum1>=sum4&&sum1>=sum5)
       {
        max=sum1;
       }
    if(sum2>sum1&&sum2>sum3&&sum2>sum4&&sum2>sum5)
       {
        max=sum2;
       }
    if(sum3>sum2&&sum3>sum1&&sum3>sum4&&sum3>sum5)
       {
        max=sum3;
       }
    if(sum4>sum2&&sum4>sum3&&sum4>sum1&&sum4>sum5)
       {
        max=sum4;
       }
    if(sum5>sum2&&sum5>sum3&&sum5>sum4&&sum5>sum1)
       {
        max=sum5;
       }
    printf("%lld %lld",min,max);
    
    
    return 0;
}
