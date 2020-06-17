#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],big,low,sum=0; 
    int i;
    for(i=0;i<5;i++)
        scanf("%lld ",&a[i]);
    big=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>big)
            big=a[i];
        else
            if(a[i]<low)
                low=a[i];
        sum+=a[i];
    }
    printf("%lld %lld",sum-big,sum-low);
    return 0;
}
