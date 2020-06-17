#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int i,a[5],small=a[0],big=a[0];
    long int sum=0;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        if(small>a[i])
            small=a[i];
        if(big<a[i])
            big=a[i];
        sum=sum+a[i];
    }
    printf("%ld %ld",sum-big,sum-small);
    
          
        
    
    return 0;
}
