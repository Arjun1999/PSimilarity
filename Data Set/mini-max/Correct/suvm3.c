#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
 long long int a[5],max,min,sum;
    sum=0;int i;
    for(i=0;i<5;i++)
        {
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    max=a[0];min=a[0];
    for(i=1;i<5;i++)
        {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    
    return 0;
}
