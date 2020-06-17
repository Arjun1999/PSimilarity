#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i;
    long a[5];
    long max,min,maxvar=0,minvar=0,minsum=0,maxsum=0;
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    }
    max=min=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
            maxvar=i;
        }
        if(a[i]<min)
        {
            min =a[i];
            minvar =i;
        }
    }
    for(i=0;i<5;i++)
    {
        if(i !=minvar)
            maxsum = maxsum + a[i];
        if(i != maxvar)
            minsum = minsum+ a[i];
    }
    printf("%ld %ld",minsum,maxsum);
    return 0;
}
