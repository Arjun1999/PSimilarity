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
    long int max=0,min=0,sum=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum=b+c+d+e;
    max=sum;min=sum;
    sum=a+c+d+e;
    if(max<sum) max=sum;
    if(min>sum) min=sum;
    sum=a+b+d+e;
    if(max<sum) max=sum;
    if(min>sum) min=sum;
    sum=a+b+c+e;
    if(max<sum) max=sum;
    if(min>sum) min=sum;
    sum=a+b+c+d;
    if(max<sum) max=sum;
    if(min>sum) min=sum;
    printf("%lld %lld",min,max);
    return 0;
}
