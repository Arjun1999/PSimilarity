#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long int a[5],sum=0,large=-1000000000,small=1000000000;
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
        sum+=a[i];
        large<a[i]?large=a[i]:1;
        small>a[i]?small=a[i]:1;
    }
    printf("%lld %lld",sum-large,sum-small);
    return 0;
}
