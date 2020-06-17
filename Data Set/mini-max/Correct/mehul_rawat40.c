#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],small,large,min,max; 
    for(int i=0;i<5;i++)
        scanf("%lld ",&a[i]);
    small=a[0];
    large=a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]>=large)
            large=a[i];
        
        if(a[i]<=small)
            small=a[i];      
    }
    max=a[0]+a[1]+a[2]+a[3]+a[4]-small;
    min=a[0]+a[1]+a[2]+a[3]+a[4]-large;
    printf("%lld %lld",min,max);
    return 0;
}
