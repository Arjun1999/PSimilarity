#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    unsigned long long int arr[5],max,min,sum=0;
    int i;
    scanf("%lld",&arr[0]);
    min= arr[0];
    max= arr[0];
    sum = sum+arr[0];
    
    for(i=1;i<5;i++)
    {
        scanf("%d",&arr[i]);
        if(max<arr[i])
            max= arr[i];
        if(min>arr[i])
            min= arr[i];
        sum= sum+arr[i];
            
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
