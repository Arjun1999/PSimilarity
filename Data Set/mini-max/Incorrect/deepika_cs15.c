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
    unsigned long long int a[10];
    int sum=0;
    for(int i=1;i<5;i++)
    {
        
int max=a[0],min=a[0],sum=sum+a[0];
        scanf("%lld",&a[i]);
        if(max<a[i])
        max=a[i];
        
        if(min>a[i])
            min=a[i];
        sum=sum+a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    
}
