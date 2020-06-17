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
    long int sum=0,min=0,max=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum=a+b+c+d;
    min=sum;
    max=sum;
    sum=b+c+d+e;
    (sum>max)?(max=sum):max;
    (sum<min)?(min=sum):min;
    sum=a+c+d+e;
    (sum>max)?(max=sum):max;
    (sum<min)?(min=sum):min;
    sum=a+b+d+e;
    (sum>max)?(max=sum):max;
    (sum<min)?(min=sum):min;
    sum=a+b+c+e;
    (sum>max)?(max=sum):max;
    (sum<min)?(min=sum):min;
    printf("%ld %ld",min,max);
    return 0;
}
