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
    long int min;
    long int max;
    long int sum1=a+b+c+d;
    long int sum2=a+b+c+e;
    long int sum3=a+b+d+e;
    long int sum4=a+c+d+e;
    long int sum5=b+c+d+e;
    min = max = sum1;
    min = (sum2<min)?sum2:min;
    min = (sum3<min)?sum3:min;
    min = (sum4<min)?sum4:min;
    min = (sum5<min)?sum5:min;
    
    max = (sum2>max)?sum2:max;
    max = (sum3>max)?sum3:max;
    max = (sum4>max)?sum4:max;
    max = (sum5>max)?sum5:max;
    printf("%ld %ld",min,max);
    return 0;
}
