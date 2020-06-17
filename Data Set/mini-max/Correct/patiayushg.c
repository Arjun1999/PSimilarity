#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int arr[5],min,max,i,sum=0,sum1;
    for(i=0;i<5;i++)
        {
        scanf("%ld",&arr[i]);
        sum=sum+arr[i];
    }
    min=sum;
    max=0;
    for(i=0;i<5;i++)
        {
        sum1=sum-arr[i];
        if(sum1>max)
            max=sum1;
        if(sum1<min)
            min=sum1;
    }
    printf("%ld %ld",min,max);
}
