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
int a[5],max=0,min=1,sum=0,m,n;
int i;
for(i=1;i<=5;i++)
 {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    if(max<a[i])
    {
        max=a[i];
    }
    else if(min>a[i])
    {
        min=a[i];
    }
    
 }
    m=sum-min;
    n=sum-max;
    printf("%d\t%d",n,m);
    return 0;
}
