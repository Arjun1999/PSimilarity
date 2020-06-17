#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int sum,max=0,min;
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    max=0;
    sum=a+b+c+d;
    min=sum;
    if(sum>max)
        max=sum;
    if(sum<min)
        min=sum;
     sum=a+b+c+e;
    if(sum>max)
        max=sum;
    if(sum<min)
        min=sum;
 sum=a+b+d+e;
if(sum>max)
        max=sum;
    if(sum<min)
        min=sum;
     sum=a+c+d+e;
if(sum>max)
        max=sum;
    if(sum<min)
        min=sum;
     sum=b+c+d+e;
if(sum>max)
        max=sum;
    if(sum<min)
        min=sum;
    printf("%ld ",min);
   printf("%ld",max);    
    return 0;
}