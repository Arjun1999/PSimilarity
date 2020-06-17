#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long int a[5], max = INT_MIN, min = INT_MAX, sum = 0, i;
    for( i=0 ; i<5 ; i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
        sum = sum + a[i];
    }
    
    printf("%lld %lld\n",sum-max, sum-min);
    
    return 0;
}
