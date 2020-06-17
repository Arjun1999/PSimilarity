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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long long int sum1,sum2;
    sum1=sum2=0;
    if(a+b+c+d > b+c+d+e){
        sum1 = a+b+c+d;
        sum2 = b+c+d+e;}
    else{
        sum2 = a+b+c+d;
        sum1 = b+c+d+e;
    }
    
    if(c+d+e+a > sum1)
        sum1 = c+d+e+a;
    if(d+e+a+b > sum1)
        sum1 = d+e+a+b;
    if(e+a+b+c > sum1)
        sum1 = e+a+b+c;
    if(c+d+e+a < sum2)
        sum2 = c+d+e+a;
    if(d+e+a+b < sum2)
        sum2 = d+e+a+b;
    if(e+a+b+c < sum2)
        sum2 = e+a+b+c;

    printf("%lld %lld",sum2,sum1);

    return 0;
}
