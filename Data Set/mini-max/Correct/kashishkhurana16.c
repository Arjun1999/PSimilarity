#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],max=0,min=0,total=0,maxsum=0,minsum=0;
    int i=0;
    while(i<5)
        scanf("%lld",&a[i++]);
    max=a[0];
    min=a[0];
    for(i=0;i<5;i++)
        {
        if(max<a[i])
            max=a[i];
    }
    for(i=0;i<5;i++)
        {
        if(min>a[i])
            min=a[i];
    }
    for(i=0;i<5;i++)
        {
        total=total+a[i];
    }
    maxsum=total-min;
    minsum=total-max;
    printf("%lld %lld",minsum,maxsum);
    return 0;
}
