#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int n,i,a[100],*p,sum=0;
    
    scanf("%d",&n);
    p=&a[0];
    for (i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    
    for (i=0;i<n;i++)
    {
    sum=sum + *(p+i);
    }
    printf("%d",sum);
}
