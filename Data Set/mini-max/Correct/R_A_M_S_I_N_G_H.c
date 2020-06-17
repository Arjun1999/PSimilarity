#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int arr[5] ;
    long long int max,min,sum=0;
    scanf("%lld",&arr[0]);
    max=min=arr[0];
    sum=max;
    for(int i = 1; i < 5; i++){
       scanf("%lld",&arr[i]);
        sum+=arr[i];
        if(min>arr[i]){min=arr[i];}
        else if(max<arr[i]){max=arr[i];}        
    }
    printf("%lld %lld\n",sum-max,sum-min);
    return 0;
}
