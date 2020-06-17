#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int i,max=0,min=1000000001,sum=0,a[5];
    for(i=0;i<5;i++)
    {   scanf("%lld",&a[i]);
        sum+=a[i];
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
