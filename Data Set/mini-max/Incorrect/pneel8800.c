#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long int n,i,sum=0,max,min,l,m;
    
    scanf("%lld",&n);

    long long int a[n];


    for(i=0 ; i<n ; i++)
    {
        scanf("%lld",&a[i]);
    }

    max=a[0];
    min=a[0];
    for(i=0 ; i<n ; i++)
    {
        if(a[i]>max)
        {
           max=a[i];
        }

        if(a[i]<min)
        {
            min=a[i];
        }

        sum+=a[i];
    }

    printf("%lld %lld",sum-max,sum-min);
    
    return 0;
}
