#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i;
    long int sum=0,max,min,maxsum,minsum,a[5];
    for(i=0;i<5;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<5;i++)
        sum=sum+a[i];
    min=a[0];
    max=a[0];
    for(i=1;i<5;i++)
        {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    maxsum=sum-min;
    minsum=sum-max;
    printf("%ld\t%ld",minsum,maxsum);
    return 0;
}
