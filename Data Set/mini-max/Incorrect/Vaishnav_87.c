#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int arr[5],min,max,n;
    long int sum=0;
    min=arr[0];
    max=arr[0];
    for(n= 0; n< 5; n++){
       scanf("%d",&arr[n]);
        if(min>arr[n])
        {
            min=arr[n];
        }
        if(max<arr[n])
        {
            max=arr[n];
        }
        sum=sum+arr[n];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
