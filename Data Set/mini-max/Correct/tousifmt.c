#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int ret_min(long long int num1, long long int num2)
{
    if (num1 < num2)
        return num1;
    else
        return num2;
}

long long int ret_max(long long int num1, long long int num2)
{
    if (num1 < num2)
        return num2;
    else
        return num1;   
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    
    long long int sum   = 0;
    long long int sum_a = 0; 
    long long int sum_b = 0; 
    long long int sum_c = 0; 
    long long int sum_d = 0;
    long long int sum_e = 0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    sum = a+b+c+d+e;
    
    sum_a = sum - a;
    sum_b = sum - b;
    sum_c = sum - c;
    sum_d = sum - d;
    sum_e = sum - e;
    
    printf("%lld %lld\n", ret_min(ret_min(ret_min(ret_min(sum_a, sum_b), sum_c), sum_d), sum_e),
    ret_max(ret_max(ret_max(ret_max(sum_a, sum_b), sum_c), sum_d), sum_e));
    
    return 0;
}
