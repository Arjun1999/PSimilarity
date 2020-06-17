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
    
    long long int sum_5 = a + b + c + d + e;
    long long int sum[5];
    
    sum[0] = sum_5 - a;
    sum[1] = sum_5 - b;
    sum[2] = sum_5 - c;
    sum[3] = sum_5 - d;
    sum[4] = sum_5 - e;
    
    long long int min = sum[0];
    long long int max = sum[0];
    for (int i = 0; i < 5;i++ )
    {
        if (min > sum[i])
        {
            min = sum[i];
        }
        if (max < sum[i])
        {
            max = sum[i];
        }
        
    }
    
    printf("%lld %lld", min, max);
    return 0;
}
