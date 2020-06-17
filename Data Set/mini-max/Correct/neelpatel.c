#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    int i;
    long int sum_min,sum_max;
    for ( i = 1 ; i < 6 ; i++ )
        scanf("%ld", &a[i]);
    
    long int sum[5] = {a[2]+a[3]+a[4]+a[5],a[1]+a[3]+a[4]+a[5],a[1]+a[2]+a[4]+a[5],a[1]+a[2]+a[3]+a[5], a[1]+a[2]+a[3]+a[4]};
    sum_min = sum[0];
    for ( i = 1 ; i < 5 ; i++ ) 
    {
        if ( sum[i] < sum_min ) 
        {
           sum_min = sum[i];   
        }
    } 
    printf("%ld ",sum_min);
    sum_max = sum[0];
    for ( i = 1 ; i < 5 ; i++ ) 
    {
        if ( sum[i] > sum_max ) 
        {
           sum_max = sum[i];   
        }
    } 
    printf("%ld",sum_max);
    return 0;
}