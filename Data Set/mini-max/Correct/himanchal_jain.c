#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,a[5],n=5,min=INT_MAX,max=INT_MIN;
    long int sum=0,minsum,maxsum;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }
    minsum=sum-max;
    maxsum=sum-min;
    printf("%ld %ld",minsum,maxsum);
    return 0;
}