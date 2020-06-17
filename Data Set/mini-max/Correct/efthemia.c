#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int max,min,sum,temp;

void compare(long long int temp){
    if (temp>max) max=temp;
    if (temp<min) min=temp;
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum = a+b+c+d+e;
    min = sum;
    max = 0;
    temp = sum-a;
    compare(temp);
    temp = sum-b;
    compare(temp);
    temp = sum-c;
    compare(temp);
    temp = sum-d;
    compare(temp);
    temp = sum-e;
    compare(temp);
    printf("%lld %lld", min, max);
    return 0;
}

