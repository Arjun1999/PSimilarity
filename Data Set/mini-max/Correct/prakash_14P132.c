#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int arr[5],i,j,k,min,max,sum=0;
    scanf("%lld%lld%lld%lld%lld",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    max=arr[0];
    min=arr[0];
    sum+=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    for(i=0;i<5;i++)
        {
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];
    }
    printf("%lld %lld\n",sum-max,sum-min);
    return 0;
}
