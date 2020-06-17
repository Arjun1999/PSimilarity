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
    long int max_sum, min_sum,sum;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    sum = b+c+d+e;
    max_sum = sum; min_sum = sum;
    
    sum = a+c+d+e;
    if (sum > max_sum)
        max_sum = sum;
    else if (sum < min_sum)
        min_sum = sum;
        
        sum = a+b+d+e;
    if (sum > max_sum)
        max_sum = sum;
    else if (sum < min_sum)
        min_sum = sum;

    sum = a+b+c+e;
    if (sum > max_sum)
        max_sum = sum;
    else if (sum < min_sum)
        min_sum = sum;

    sum = a+b+c+d;
    if (sum > max_sum)
        max_sum = sum;
    else if (sum < min_sum)
        min_sum = sum;
   
    printf("%ld %ld", min_sum, max_sum);       
        
    return 0;
}
