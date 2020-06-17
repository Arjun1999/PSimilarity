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
    long int min ,max,temp;
    min=b+c+d+e;
    max=a+c+d+e;
    if(min>max)
        {
        temp=min;
        min=max;
        max=temp;
    }
    temp= a+b+d+e;
    if(temp<min)
        min=temp;
    if(temp>max)
        max=temp;
    temp= a+b+c+e;
    if(temp<min)
        min=temp;
    if(temp>max)
        max=temp;
    temp= a+b+d+c;
    if(temp<min)
        min=temp;
    if(temp>max)
        max=temp;
    return 0;
    printf("%lld %lld",min,max)
}
