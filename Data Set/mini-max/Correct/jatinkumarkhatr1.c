#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long int a[5],sum=0,s=0;
    int min=0,max=0,i;
    for(i=0;i<5;i++)
    scanf("%lld",&a[i]);
    for(i=0;i<5;i++)
    {
        if(a[i]>a[max])
            max=i;
        if(a[i]<a[min])
            min=i;
    }
    for(i=0;i<5;i++)
        {
            if(i!=min)
                sum+=a[i];
            if(i!=max)
                s+=a[i];
        }
    printf("%lld %lld",s,sum);
    return 0;
}
