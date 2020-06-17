#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long int min;
long int max;
void cal(long int x)
{
    if(x<min)
        min=x;
    if(x>max)
        max=x;
}
int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    
    long int sum=0;
    long int k;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    min=sum;
    max=0;
    cal(sum-a);
    cal(sum-b);
    cal(sum-c);
    cal(sum-d);
    cal(sum-e);
    printf("%lld %lld",min,max);
    return 0;
}
