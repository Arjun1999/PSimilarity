#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long int a[5];int i;
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    long long int s=a[0]+a[1]+a[2]+a[3]+a[4];
    for(i=0;i<5;i++)
        {
        a[i]=s-a[i];
        }
    long long int max=a[0],min=a[0];
    for(i=0;i<5;i++)
        {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        }
    printf("%lld %lld",min,max);
    
    
    
}
