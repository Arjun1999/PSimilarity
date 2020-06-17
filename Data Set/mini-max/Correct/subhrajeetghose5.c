#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long int a[5],s,b,max,min,t;    
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
        
    }
    s=a[0];
    for(i=1;i<5;i++)
    {
        if(s>a[i])    
            {
                s=a[i];
            }
    }
    b=a[0];
    for(i=1;i<5;i++)
    {
        if(b<a[i])    
            {
                b=a[i];
            }
    }
    t=0;
    for(i=0;i<5;i++)
    {
          t=t+a[i];  
    }
    max=t-s;
    min=t-b;
    printf("%lld\t%lld",min,max);
    return 0;
}
