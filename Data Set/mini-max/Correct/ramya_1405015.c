#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    unsigned long long int sum=0,max,min,a[5],i;
    for(i=0;i<5;i++)
        {
        scanf("%lld",&a[i]);
        }
    max=a[0];
    min=a[0];
    sum=sum+a[0];
    for(i=1;i<5;i++)
        {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
            sum=sum+a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
   
    
    return 0;
}
