#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int a[5],min,max=0,sum=0;
    for(int i=0;i<5;i++){
        scanf("%lld",&a[i]);
        sum=sum+a[i];
    }
    min=sum;
    for(int i=0;i<5;i++){
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    min=sum-min;
    max=sum-max;
    printf("%lld %lld",max,min);
    return 0;
}
