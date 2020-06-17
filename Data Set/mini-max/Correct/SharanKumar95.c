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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long max=0,min=10000000000;
    long sum=0;
    sum = a+b+c+d;
    if(sum > max)
      max=sum;
    if(sum <min)
        min =sum;
    sum= b+c+d+e;
    if(sum > max)
      max=sum;
    if(sum <min)
        min =sum;
      sum= a+c+d+e;
    if(sum > max)
      max=sum;
    if(sum <min)
        min =sum;
      sum= b+a+d+e;
    if(sum > max)
      max=sum;
    if(sum <min)
        min =sum;
  sum= b+c+a+e;
    if(sum > max)
      max=sum;
    if(sum <min)
        min =sum;
    printf("%ld %ld",min,max);
    return 0;
}
