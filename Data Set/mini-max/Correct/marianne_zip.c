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
    long int sum1;
    long int sum2;
    long int sum3;
    long int sum4;
    long int sum5;
    long int min;
    long int max=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum1=a+b+c+d;
    min=sum1;
    if (sum1>max)
        max=sum1;
    sum2=b+c+d+e;
    if (sum2>max)
        max=sum2;
    if (sum2<min)
        min=sum2;
    sum3=a+b+d+e;
    if (sum3>max)
        max=sum3;
    if (sum3<min)
        min=sum3;
    sum4=a+c+d+e;
    if (sum4>max)
        max=sum4;
    if (sum4<min)
        min=sum4;
    sum5=a+b+c+e;
    if (sum5>max)
        max=sum5;
    if (sum5<min)
        min=sum5;
    
    printf("%ld %ld",min,max);
    
    return 0;
}
