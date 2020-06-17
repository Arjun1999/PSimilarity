#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    
    long int a[5],i,biggest=0,smallest,sum=0;
    for(i=0;i<5;i++)
        {
        scanf("%ld",&a[i]);
    }
    smallest=a[0];
    for(i=0;i<5;i++)
        {
        sum=sum+a[i];
        if(a[i]>biggest)
            {
            biggest=a[i];
        }
        if(a[i]<smallest)
            {
            smallest=a[i];
        }
        }
    printf("%ld %ld",sum-biggest,sum-smallest);
    return 0;

}