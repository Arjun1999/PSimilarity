#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    long long int sum1,sum2,sum3,sum4,sum5,min,max;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum1=a+b+c+d;
    sum2=a+b+c+e;
    sum3=a+b+d+e;
    sum4=a+c+d+e;
    sum5=b+c+d+e;
    if(sum1>sum2)
        {
        max=sum1;
        min=sum2;
    }
    else
        {
        max=sum2;
        min=sum1;
    }
        if(sum3>max)
            {
            max=sum3;
        }
        else if(sum3<min)
            {
            min=sum3;
        }
    if(sum4>max)
        {
        max=sum4;
    }
    else if(sum4<min)
        {
        min=sum4;
    }
    if(sum5>max)
        {
        max=sum5;
    }
    else if(sum5<min)
        {
        min=sum5;
    }
        printf("%lld %lld",min,max);
    return 0;
}
