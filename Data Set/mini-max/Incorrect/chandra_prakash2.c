#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[50],m,k,n,i,max,min,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
              }
    for(i=0;i<n;i++)
    {
            sum=sum+a[i];
    }

    
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++){
        if(min>a[i])
        {
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
        
    }
    m=sum-min;
    k=sum-max;
    printf("%d d",k,m);
    
    return 0;
}