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
    int a[100],n,i,t=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=2;i<=n;i++)
    {
        t=t+a[i];
    }
    for(i=1;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%d",t);
    printf("%d",s);
    return(0);
}

